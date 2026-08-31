//graph colouring
//T(n) = O(c^n)

#include <iostream>
using namespace std;

const int MAX_VERTICES = 20;
int G[MAX_VERTICES][MAX_VERTICES]; 
int x[MAX_VERTICES];               
int n, m;                          

void printSolution() {
    cout << "Solution Exists:\n";
    for (int i = 0; i < n; i++) {
        cout << "Vertex " << i + 1 << " -> Color " << x[i] << endl;
    }
    cout << "\n";
}

bool issafe(int k, int c) {
    for (int i = 0; i < n; i++) {
        if (G[k][i] == 1 && x[i] == c) {
            return false;
        }
    }
    return true;
}

void graphcolor(int k) {
    for (int c = 1; c <= m; c++) {
        if (issafe(k, c)) {
            x[k] = c;
            if (k == n - 1) { 
                printSolution();
            } else {
                graphcolor(k + 1);
            }
            x[k] = 0; 
        }
    }
}

int main() {
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of colors: ";
    cin >> m;

    cout << "Enter the adjacency matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
        }
    }

    for (int i = 0; i < n; i++) x[i] = 0;

    cout << "\nAll possible solutions:\n";
    graphcolor(0);

    return 0;
}


//8: Adjacency matrix for the graph
//9: Array to store the colors of vertices
//10: n = number of vertices, m = number of colors
//12: Function to print the solution
//20: Function to check if the color assignment is safe
//29: Function to solve graph coloring using backtracking
//33: Solution found
//38: Backtrack
    //49: Input adjacency matrix
    //56: Initialize color array
    //58: Start coloring from the first vertex
