// // Rabin karp Matcher/Algo

// #include<iostream>
// #include<string>
// #include<cmath> //provides a wide range of mathematical functions, constants, and type definitions.

// using namespace std;

// void rabinKarpMatcher(string t , string p , int d , int q){
    
//     int n = t.length();
//     int m = p.length();

//     int pHash = 0;
//     int tHash = 0;
//     int h = 1 ; //A factor that reps the highest power of d in the hash value formula.

//     //precompute h....highest power of d 
//     for(int i = 0; i < m; i++){   //This loop calculates h = d^{m-1} \% q.
//         h = (h*d)%q ;   //yeh kuch ni bus h nilka hai 
//     }

//     for(int i = 0; i < m; i++){
//         pHash = (d*pHash + p[i]) %q ;   //this is p..see notes
//         tHash = (d*tHash + t[i]) %q ;   //this is basically t-not....notes m dekho
//     }   //The hash formula: hash = (d \times hash + text[i]) \% q

//     for (int s = 0; s <= n-m ; s++){  //loop from starting index...jo match krega pattern ke charcters ko one by one
//         if(pHash == tHash){ //phle hash value match 
//             if(t.substr(s,m) == p){ //then pura pattern match kr diya.
//                 cout<<"pattern found at at index : "<<s<<endl;  
//             }
//         }
//         if(s < n-m){
//             tHash = (d*(tHash-h*t[s+1]) + t[ s + m + 1 ]) % q ; //next vale ka tHash nikl rhe hai ...sir ke hisab se t_i
            
//             if(tHash<0){
//                 tHash += q ;
//             }
//         }
//     }
// }

// int main() {
//     string text, pattern;
//     cout << "Enter the text: ";
//     cin >> text;
//     cout << "Enter the pattern: ";
//     cin >> pattern;
    
//     int d = 256; // Number of characters in the input alphabet
//     int q = 101; // A prime number

//     rabinKarpMatcher(text, pattern, d, q);
//     return 0;
// }



// Rabin Karp Matcher/Algorithm

#include<iostream>
#include<string>
#include<cmath> //provides a wide range of mathematical functions, constants, and type definitions.

using namespace std;

void rabinKarpMatcher(string t, string p, int d, int q) {
    int n = t.length();
    int m = p.length();

    int pHash = 0;
    int tHash = 0;
    int h = 1; // A factor that represents the highest power of d in the hash value formula.

    // Precompute h = d^(m-1) % q
    for(int i = 0; i < m - 1; i++) {
        h = (h * d) % q;
    }

    // Calculate the hash value of the pattern and the first window of the text
    for(int i = 0; i < m; i++) {
        pHash = (d * pHash + p[i]) % q;
        tHash = (d * tHash + t[i]) % q;
    }

    // Slide the pattern over the text
    for (int s = 0; s <= n - m; s++) {
        // If hash values match, verify the actual substring
        if (pHash == tHash) {
            if (t.substr(s, m) == p) {
                cout << "Pattern found at index: " << s << endl;
            }
        }

        // Calculate hash value for the next window of text
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