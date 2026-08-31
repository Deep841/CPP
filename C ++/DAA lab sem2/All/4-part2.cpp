#include <iostream>
#include <algorithm>

using namespace std;

// Function to compare profits of two items (for sorting)
bool compare(int a, int b) {
    return a > b;  // Sorting in decreasing order of profit
}

// Function to compute the maximum profit in fractional knapsack
double fractionalKnapsack(int W, int profit[], int weight[], int n) {
    // Create an array of indices
    int index[n];
    for (int i = 0; i < n; i++) {
        index[i] = i;
    }

    // Sort indices based on profit in decreasing order
    sort(index, index + n, [&](int i, int j) {
        return profit[i] > profit[j];
    });

    double maxProfit = 0.0;

    for (int i = 0; i < n; i++) {
        int idx = index[i];  // Get the original index after sorting
        if (W >= weight[idx]) {
            // Take the whole item
            W -= weight[idx];
            maxProfit += profit[idx];
        } else {
            // Take the fraction of the remaining capacity
            maxProfit += profit[idx] * ((double)W / weight[idx]);
            break;
        }
    }

    return maxProfit;
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter knapsack capacity: ";
    cin >> W;

    int profit[n], weight[n];
    cout << "Enter profit and weight of each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> profit[i] >> weight[i];
    }

    double maxProfit = fractionalKnapsack(W, profit, weight, n);
    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}