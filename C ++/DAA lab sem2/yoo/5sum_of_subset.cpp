//sum of subset 
//T(n) = O(2^n)

#include <iostream>
using namespace std;

int w[] = {0, 11, 13, 24, 7}; 
int x[5]; 
int m = 31; 

void printSolution(int x[], int k) {
    cout << "Subset found: { ";
    for (int i = 1; i <= k; i++) {
        if (x[i] == 1) cout << w[i] << " ";
    }
    cout << "}\n";
}

void SumOfSub(int s, int k, int r) {
    cout << "s (Current Sum): " << s << "\t";
    cout << "k (Current Index): " << k << "\t";
    cout << "r (Remaining Sum): " << r << "\n";

    x[k] = 1;
    if (s + w[k] == m) {
        printSolution(x, k);
    }
    else if (s + w[k] + w[k + 1] <= m) {
        SumOfSub(s + w[k], k + 1, r - w[k]);
    }

    if (s + r - w[k] >= m && s + w[k + 1] <= m) {
        x[k] = 0;
        SumOfSub(s, k + 1, r - w[k]);
    }
}

int main() {
    int totalSum = 0;
    for (int i = 1; i <= 4; i++) totalSum += w[i]; 

    cout << "Backtracking: Sum of Subsets\n";
    SumOfSub(0, 1, totalSum);
    return 0;
}

//7: Example weights (1-based index)
//8: To store the solution
//9: Target sum
//40: Calculate total sum of weights