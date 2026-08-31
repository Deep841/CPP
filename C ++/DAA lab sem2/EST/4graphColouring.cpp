#include <iostream>
using namespace std;

const int MAX_VERTICES = 20;
int G[MAX_VERTICES][MAX_VERTICES]; // Adjacency matrix for the graph
int x[MAX_VERTICES];               // Array to store the colors of vertices
int n, m;                          // n = number of vertices, m = number of colors

// Function to print the solution
void printSolution() {
    cout << "Solution Exists:\n";
    for (int i = 0; i < n; i++) {
        cout << "Vertex " << i + 1 << " -> Color " << x[i] << endl;
    }
    cout << "\n";
}

// Function to check if the color assignment is safe
bool issafe(int k, int c) {
    for (int i = 0; i < n; i++) {
        if (G[k][i] == 1 && x[i] == c) {
            return false;
        }
    }
    return true;
}

// Function to solve graph coloring using backtracking
void graphcolor(int k) {
    for (int c = 1; c <= m; c++) {
        if (issafe(k, c)) {
            x[k] = c;
            if (k == n - 1) { // Solution found
                printSolution();
            } else {
                graphcolor(k + 1);
            }
            x[k] = 0; // Backtrack
        }
    }
}

int main() {
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of colors: ";
    cin >> m;

    // Input adjacency matrix
    cout << "Enter the adjacency matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
        }
    }

    // Initialize color array
    for (int i = 0; i < n; i++) x[i] = 0;

    // Start coloring from the first vertex
    cout << "\nAll possible solutions:\n";
    graphcolor(0);

    return 0;
}
