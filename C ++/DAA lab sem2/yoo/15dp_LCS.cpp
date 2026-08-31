//Dynamic Programing : Longest Common Substring
//T(n) = O(n * m)

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string A = "ABCDEFGHI";
    string B = "EDGI";
    int m = A.length();
    int n = B.length();
    int LCS[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                LCS[i][j] = 0;
            else if (A[i - 1] == B[j - 1])
                LCS[i][j] = 1 + LCS[i - 1][j - 1];
            else
                LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
        }
    }

    int i = m, j = n;
    stack<char> s;
    while (i > 0 && j > 0) {
        if (A[i - 1] == B[j - 1]) {
            s.push(A[i - 1]);
            i--;
            j--;
        } else if (LCS[i - 1][j] > LCS[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    cout << "LCS Table - \n ";
    for (int j = 0; j < n; j++)
        cout << B[j] << " ";
    cout << "\n";
    
    for (int i = 0; i <= m; i++) {
        if (i > 0)
            cout << A[i - 1] << "-";
        else
            cout << " ";
        for (int j = 0; j <= n; j++)
            cout << LCS[i][j] << " ";
        cout << endl;
    }

    cout << "\nLongest Common Subsequence - ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << endl;
    return 0;
}