//Kruskal
//T(n) = O(ElogV)

#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int src, dest, weight;
};

struct Subset {
    int parent;
    int rank;
};

int find(Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void unionSets(Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (subsets[rootX].rank < subsets[rootY].rank)
        subsets[rootX].parent = rootY;
    else if (subsets[rootX].rank > subsets[rootY].rank)
        subsets[rootY].parent = rootX;
    else {
        subsets[rootY].parent = rootX;
        subsets[rootX].rank++;
    }
}

void kruskal(Edge edges[], int V, int E) {
    sort(edges, edges + E, [](Edge a, Edge b) {
        return a.weight < b.weight;
    });

    Subset *subsets = new Subset[V];
    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    Edge *result = new Edge[V - 1]; 
    int e = 0; 
    int i = 0; 

    while (e < V - 1 && i < E) {
        Edge nextEdge = edges[i++];
        int x = find(subsets, nextEdge.src);
        int y = find(subsets, nextEdge.dest);

        if (x != y) {
            result[e++] = nextEdge;
            unionSets(subsets, x, y);
        }
    }

    cout << "Minimum Spanning Tree using Kruskal's Algorithm:\n";
    cout << "Edge\tWeight\n";
    for (int i = 0; i < e; i++)
        cout << result[i].src << " - " << result[i].dest << "\t" << result[i].weight << endl;

    delete[] subsets;
    delete[] result;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;
    
    Edge *edges = new Edge[E];
    cout << "Enter the edges (source, destination, weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }

    kruskal(edges, V, E);
    delete[] edges;

    return 0;
}