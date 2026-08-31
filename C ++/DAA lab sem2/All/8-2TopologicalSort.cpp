//topological sort
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "No. of vertices: ";
    cin >> n;

    int a[n][n];

    // Initialize adjacency matrix
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {  
            a[i][j] = 0;
        }
    }

    int ed;
    cout << "No. of edges: ";
    cin >> ed;

    // Input edges
    for (int i = 0; i < ed; i++) {
        int SV, EV;
        cout << "Start vertex: ";
        cin >> SV;
        cout << "End vertex: ";
        cin >> EV;

        a[SV][EV] = 1;  
    }

    // Display adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate indegrees
    int indegree[n];
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 1)
                count++;
        }
        indegree[j] = count;
    }

    // Topological sort using Kahn's Algorithm
    int queue[n];
    int f = 0, r = 0;

    // Push all vertices with indegree 0 into queue
    for (int i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            queue[r++] = i;
            indegree[i] = -1; // mark as visited
        }
    }

    cout << "Topological Sort: ";
    while (f < r) {
        int v = queue[f++];
        cout << v << " ";

        for (int i = 0; i < n; i++) {
            if (a[v][i] == 1) {
                indegree[i]--;
                if (indegree[i] == 0) {
                    queue[r++] = i;  
                    indegree[i] = -1;
                }
            }
        }
    }

    cout << endl;
    return 0;
}