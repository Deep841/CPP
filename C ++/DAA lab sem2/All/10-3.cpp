#include <iostream>
#include <limits.h>
using namespace std;

#define MAX 10  // Maximum number of vertices

void addEdge(int graph[MAX][MAX], int u, int v, int weight) {
    graph[u][v] = weight;
    graph[v][u] = weight; // for undirected graph
}

void displayGraph(int graph[MAX][MAX], int vertices) {
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int minDistance(int dist[MAX], bool visited[MAX], int vertices) {
    int min = INT_MAX, min_index;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i] && dist[i] <= min) {
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

void printDijkstraResult(int dist[MAX], int parent[MAX], int src, int vertices) {
    cout << "\nVertex\tDistance\tPath\n";
    for (int i = 0; i < vertices; i++) {
        cout << src << " -> " << i << "\t" << dist[i] << "\t\t";
        int path[MAX];
        int count = 0;
        int j = i;
        while (j != -1) {
            path[count++] = j;
            j = parent[j];
        }
        for (int k = count - 1; k >= 0; k--) {
            cout << path[k];
            if (k != 0) cout << " -> ";
        }
        cout << endl;
    }
}

void dijkstra(int graph[MAX][MAX], int src, int vertices) {
    int dist[MAX];      
    bool known[MAX];   
    int parent[MAX];    

    for (int i = 0; i < vertices; i++) {
        dist[i] = INT_MAX;
        known[i] = false;
        parent[i] = -1;
    }

    dist[src] = 0;

    for (int count = 0; count < vertices - 1; count++) {
        int u = minDistance(dist, known, vertices);
        known[u] = true;

        for (int v = 0; v < vertices; v++) {
            if (!known[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    printDijkstraResult(dist, parent, src, vertices);
}

int main() {
    int graph[MAX][MAX] = {0}; // Initialize all to 0
    int vertices = 5;

    addEdge(graph, 0, 1, 4);
    addEdge(graph, 1, 2, 8);
    addEdge(graph, 2, 3, 7);
    addEdge(graph, 3, 4, 9);
    addEdge(graph, 2, 4, 2);

    displayGraph(graph, vertices);

    int source = 0;
    dijkstra(graph, source, vertices);

    return 0;
}