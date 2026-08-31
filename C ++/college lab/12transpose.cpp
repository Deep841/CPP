#include <iostream>
using namespace std;

// Function to transpose a matrix
void transposeMatrix(int matrix[][3], int rows, int cols, int transpose[][3]) {
    // Swap rows and columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;
    
    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int transpose[cols][rows]; // Transposed matrix

    cout << "Original matrix:" << endl;
    displayMatrix(matrix, rows, cols);

    transposeMatrix(matrix, rows, cols, transpose);

    cout << "Transpose of the matrix:" << endl;
    displayMatrix(transpose, cols, rows);

    return 0;
}