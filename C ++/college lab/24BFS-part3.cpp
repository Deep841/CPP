#include <iostream>
using namespace std;

class Graph {
    int V;                 // Number of vertices
    int **adjList;         // Adjacency list representation
    int *listSize;         // Array to track the size of each list

public:
    // Constructor
    Graph(int vertices) {
        V = vertices;
        adjList = new int*[V];
        listSize = new int[V];

        for (int i = 0; i < V; i++) {
            adjList[i] = new int[V]; // Max neighbors (V - 1) per vertex
            listSize[i] = 0;         // Initialize size of each list to 0
        }
    }

    // Add an edge to the graph
    void addEdge(int u, int v) {
        adjList[u][listSize[u]++] = v;
        adjList[v][listSize[v]++] = u;  // Comment this line for directed graph
    }

    // Perform BFS
    void BFS(int start) {
        bool *visited = new bool[V];  // Track visited nodes
        for (int i = 0; i < V; i++) {
            visited[i] = false;
        }

        int *queue = new int[V];      // Manual queue implementation
        int front = 0, rear = 0;      // Front and rear pointers for the queue

        // Start BFS from the given start node
        visited[start] = true;
        queue[rear++] = start;        // Enqueue the start node

        cout << "BFS Traversal: ";
        while (front < rear) {        // While the queue is not empty
            int node = queue[front++]; // Dequeue a node
            cout << node << " ";

            // Explore all adjacent nodes
            for (int i = 0; i < listSize[node]; i++) {
                int neighbor = adjList[node][i];
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    queue[rear++] = neighbor; // Enqueue the unvisited neighbor
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
            delete[] adjList[i];
        }
        delete[] adjList;
        delete[] listSize;
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