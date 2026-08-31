//Greedy : coin changing 
//time complexity : O(n)

#include <iostream>
using namespace std;

void coinChangingGreedyAlgo(int d[], int n, int A) {

    int i = 0; 
    int totalCoins = 0; 

    cout << "\nCoin Changing using Greedy Algorithm:\n";

    while (A > 0 && i < n) {
        int count = A / d[i];

        if (count > 0) {
            cout << "Use " << count << " coins of denomination " << d[i] << endl;
            A -= count * d[i];  
            totalCoins += count; 
        }

        i = i + 1; 
    }

    if (A > 0) {
        cout << "Cannot make exact change with the available denominations.\n";
    } else {
        cout << "\nTotal coins used: " << totalCoins << endl;
    }
}

int main() {
    int d[] = {10, 5, 1};
    int n = sizeof(d) / sizeof(d[0]); 

    int A; 
    cout << "Enter the amount: ";
    cin >> A;

    coinChangingGreedyAlgo(d, n, A);

    return 0;
}


//7: Function to perform Coin Changing using Greedy Algorithm
//8:     // d[] - Array of available coin denominations (must be sorted in descending order)
    // n - Number of different denominations
    // A - Amount for which we need to make change
//9: Index for coin denominations
//10: To count total coins used
    //14: Loop until the amount becomes 0
        //15: Calculate the maximum number of coins of the current denomination
        //17: If we can use this denomination (count > 0)
//19: Reduce the amount by the value of coins used
//20: Increase the total coin count
//23: Move to the next smaller denomination
    //26: If amount is still not zero, it means we cannot make exact change
    //34: Array of available coin denominations (sorted in descending order)
//35: Number of different denominations
//37: Amount for which we need change
//41: Performing coin changing using greedy algorithm