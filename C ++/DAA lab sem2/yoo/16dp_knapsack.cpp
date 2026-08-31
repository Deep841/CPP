//Dynamic Programming : knapsack
//T(n) = O(nW)

#include <iostream>
#include <algorithm>
using namespace std;

int knapsack(int W, int wt[], int val[], int n) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}

int main() {
    int val[] = {15, 10, 9, 8, 7, 5, 4};
    int wt[] = {5, 3, 3, 1, 4, 1, 2};
    int n = sizeof(val) / sizeof(val[0]);
    int W = 15;

    cout << "Maximum value = " << knapsack(W, wt, val, n) << endl;
    return 0;
}



#include <iostream>
#include <algorithm>
using namespace std;

// Function for 0/1 Knapsack using DP
int knapsack(int W, int wt[], int val[], int n) {
    int dp[n + 1][W + 1]; // DP table to store the maximum value for each subproblem

    // Building the DP table
    for (int i = 0; i <= n; i++) { // Loop through all items
        for (int w = 0; w <= W; w++) { // Loop through all possible weights
            if (i == 0 || w == 0) // Base case: No items or weight 0
                dp[i][w] = 0;
            else if (wt[i - 1] <= w) // If the current item can be included
                dp[i][w] = max(
                    val[i - 1] + dp[i - 1][w - wt[i - 1]], // Include the item
                    dp[i - 1][w] // Exclude the item
                );
            else // If the item cannot be included
                dp[i][w] = dp[i - 1][w];
        }
    }

    // Return the maximum value for n items and weight W
    return dp[n][W];
}

int main() {
    // Array of item values
    int val[] = {15, 10, 9, 8, 7, 5, 4};
    // Array of item weights
    int wt[] = {5, 3, 3, 1, 4, 1, 2};
    // Number of items
    int n = sizeof(val) / sizeof(val[0]);
    // Maximum capacity of the knapsack
    int W = 15;

    // Calculating the maximum value
    cout << "Maximum value = " << knapsack(W, wt, val, n) << endl;
    return 0;
}