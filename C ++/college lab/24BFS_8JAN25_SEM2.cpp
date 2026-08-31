#include <iostream>
using namespace std;

class Graph {
    int V;                 // Number of vertices
    int **adjMatrix;       // Adjacency matrix to represent the graph

public:
    // Constructor
    Graph(int vertices) {
        V = vertices;
        adjMatrix = new int*[V];
        for (int i = 0; i < V; i++) {
            adjMatrix[i] = new int[V];
            for (int j = 0; j < V; j++) {
                adjMatrix[i][j] = 0;  // Initialize all edges as 0 (no edge)
            }
        }
    }

    // Add an edge to the graph
    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;  // Comment this line for a directed graph
    }

    // Perform BFS
    void BFS(int start) {
        bool *visited = new bool[V];  // Array to track visited nodes
        for (int i = 0; i < V; i++) {
            visited[i] = false;       // Initialize all nodes as unvisited
        }

        int *queue = new int[V];      // Array to simulate a queue
        int front = 0, rear = 0;      // Front and rear pointers for the queue

        // Start BFS from the given start node
        visited[start] = true;
        queue[rear++] = start;        // Enqueue the start node

        cout << "BFS Traversal: ";
        while (front < rear) {        // While the queue is not empty
            int node = queue[front++]; // Dequeue a node
            cout << node << " ";

            // Explore all adjacent nodes
            for (int i = 0; i < V; i++) {
                if (adjMatrix[node][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    queue[rear++] = i;  // Enqueue the unvisited neighbor
                }
            }
        }
        cout << endl;

        // Clean up dynamically allocated memory
        delete[] visited;
        delete[] queue;
    }

    // Destructor
    ~Graph() {
        for (int i = 0; i < V; i++) {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }
};

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges to the graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    // Perform BFS starting from node 0
    g.BFS(0);

    return 0;
}