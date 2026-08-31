//Knuth Morris Pratt 
//T(n) = O(n+m)

#include <iostream>
#include <string>
using namespace std;

void computeLPSArray(string pattern, int m, int lps[]) {
    int length = 0; 
    lps[0] = 0;    
    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMP(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    int lps[m]; 
    computeLPSArray(pattern, m, lps);

    int i = 0; 
    int j = 0; 

    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) { 
            cout << "Pattern found at index: " << (i - j) << endl;
            j = lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string text, pattern;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the pattern: ";
    cin >> pattern;

    KMP(text, pattern);

    return 0;
}

//8: Function to compute the LPS (Longest Prefix Suffix) array
//9: Length of the previous longest prefix suffix
//10: LPS value for the first character is always 0
//28: KMP Pattern Matching function
//32: LPS (Longest Prefix Suffix) array
//35: index for text
//36: index for pattern
//44: Pattern found
