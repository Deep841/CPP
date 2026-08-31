//Dynamic Programming : Coin changing
//T(n) = O(nA)

#include <iostream>
using namespace std;

const int INF = 1000000;

void coin_change_dp(int d[], int n, int A) {
    int dp[100];
    int used[100];

    for (int i = 0; i <= A; i++) {
        dp[i] = INF;
        used[i] = -1;
    }

    dp[0] = 0;

    for (int i = 1; i <= A; i++) {
        for (int j = 0; j < n; j++) {
            if (d[j] <= i && dp[i - d[j]] + 1 < dp[i]) {
                dp[i] = dp[i - d[j]] + 1;
                used[i] = j;
            }
        }
    }

    if (dp[A] == INF) {
        cout << "Not possible to make amount " << A << endl;
        return;
    }

    cout << "Minimum coins needed: " << dp[A] << endl;
    cout << "Coins used: ";

    int amount = A;
    while (amount > 0) {
        int j = used[amount];
        cout << d[j] << " ";
        amount -= d[j];
    }
    cout << endl;
}

int main() {
    int d[] = {10, 6, 1};
    int n = sizeof(d) / sizeof(d[0]);
    int A = 18;
    coin_change_dp(d, n, A);
    return 0;
}

//dp: minimum no of coins to make amount i 