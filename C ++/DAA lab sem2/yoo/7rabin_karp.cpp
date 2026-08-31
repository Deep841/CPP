// Rabin Karp Matcher/Algorithm
//AVG case : O(n+m)
//worst case : O(n*m)

#include<iostream>
#include<string>
#include<cmath> 
using namespace std;

void rabinKarpMatcher(string t, string p, int d, int q) {
    int n = t.length();
    int m = p.length();

    int pHash = 0;
    int tHash = 0;
    int h = 1; 

    for(int i = 0; i < m - 1; i++) {
        h = (h * d) % q;
    }

    for(int i = 0; i < m; i++) {
        pHash = (d * pHash + p[i]) % q;
        tHash = (d * tHash + t[i]) % q;
    }

    for (int s = 0; s <= n - m; s++) {
        if (pHash == tHash) {
            if (t.substr(s, m) == p) {
                cout << "Pattern found at index: " << s << endl;
            }
        }

        if (s < n - m) {
            tHash = (d * (tHash - t[s] * h) + t[s + m]) % q;
            if (tHash < 0)
                tHash += q;
        }
    }
}

int main() {
    string text, pattern;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the pattern: ";
    cin >> pattern;
    
    int d = 256; // Number of characters in the input alphabet
    int q = 101; // A prime number

    rabinKarpMatcher(text, pattern, d, q);
    return 0;
}

//7: provides a wide range of mathematical functions, constants, and type definitions.
//16: A factor that represents the highest power of d in the hash value formula.
    //18: Precompute h = d^(m-1) % q
    //22: Calculate the hash value of the pattern and the first window of the text
    //27: Slide the pattern over the text
        //28: If hash values match, verify the actual substring
        //34: Calculate hash value for the next window of text
