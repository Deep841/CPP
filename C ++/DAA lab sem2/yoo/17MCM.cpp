//Matrix Chain Multiplication
//T(n) = O(n^3)

#include <iostream>
using namespace std;

int minMultiplications(int p[], int n) {
    int cost[10][10]; 

    for (int i = 1; i < n; i++)
        cost[i][i] = 0;

    for (int len = 2; len < n; len++) {
        for (int i = 1; i <= n - len; i++) {
            int j = i + len - 1;
            cost[i][j] = 1000000; 

            for (int k = i; k < j; k++) {
                int temp = cost[i][k] + cost[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (temp < cost[i][j])
                    cost[i][j] = temp;
            }
        }
    }

    return cost[1][n - 1];
}

int main() {
    int p[] = {10, 30, 5, 60}; 
    int n = 4;
    int result = minMultiplications(p, n);
    cout << "Minimum multiplications: " << result << endl;
    return 0;
}