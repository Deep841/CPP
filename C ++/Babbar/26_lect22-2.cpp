/* 
3) h.w. question : check palindrome for string 
- https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633
- Ignore all non-alphanumeric characters like spaces, special symbols, etc.
*/
#include<iostream>
#include<vector>
using namespace std; 

char toLowerCase(char ch){
    if(ch>='A' && ch<='Z'){
        ch = ch-'A'+'a';
        return ch;
    }
    return ch;
}

bool isAlphaNumeric(char ch){
    return ch>='A'&&ch<='Z' || ch>='a'&&ch<='z'||ch>='0'&& ch<='9';
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length()-1;

    while(start<=end){
        //isAlphaNumeric ko skip krdnge agar starting m aya: 
        while(start<end && !isAlphaNumeric(s[start])){
            start++;
        }
        //isAlphaNumeric ko skip krdnge agar ending m aya: 
        while(start<end && !isAlphaNumeric(s[end])){
            end --;
        }
        //case sentivity removing:
        if( toLowerCase(s[start]) != toLowerCase(s[end]) ){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
/*
some direct functions for string str; 
- str.push_back('C');
- str.pop_back();
*/

/*
5) difference btw ch array and string ? :
character array : A sequence of characters stored in a char array.
                : Example: char ch[10] = "Deep";
                : char name[] = "Deep";
                  cout << name;     // ✅ Valid: prints the whole character array until '\0'

string class : A built-in C++ class that handles strings efficiently.
             : Example: string name = "Deep";
             : string name = "Deep";
               cout << name;     // ✅ Valid: prints the full string

+------------------------+-------------------------------------------+----------------------------------------------+
| Feature                | Character Array                           | string Class (C++ STL)                       |
+------------------------+-------------------------------------------+----------------------------------------------+
| Definition             | char ch[10] = "Deep";                     | string name = "Deep";                        |
+------------------------+-------------------------------------------+----------------------------------------------+
| Header Required        | <iostream>                                | <string>                                     |
+------------------------+-------------------------------------------+----------------------------------------------+
| Null Terminator        | Requires '\0' to end string               | Handled automatically                        |
+------------------------+-------------------------------------------+----------------------------------------------+
| Ease of Use            | Manual loops and functions                | Supports operators (+, ==) and methods       |
+------------------------+-------------------------------------------+----------------------------------------------+
| Memory Management      | Fixed size (pre-defined at declaration)   | Dynamic sizing (auto-resizing)               |
+------------------------+-------------------------------------------+----------------------------------------------+
| Available Functions    | Uses <cstring> (strlen, strcpy, etc.)     | Rich set of functions (.length(), .substr()) |
+------------------------+-------------------------------------------+----------------------------------------------+
| Operator Overloading   | ❌ No operator support                    | ✅ Supports +, ==, <, >, etc.                 |
+------------------------+-------------------------------------------+----------------------------------------------+
| Use in Modern C++      | Less preferred (low-level)                | Highly preferred for string manipulations    |
+------------------------+-------------------------------------------+----------------------------------------------+
*/

/*
6) Valid palindrome : 
-faltu character hatne hai
-sb lower character m hone chahiye
-fir palindrome check
same code worked as of 3)hw 
- https://leetcode.com/problems/valid-palindrome/submissions/1683884065/
*/

/*
7)reverse words in a string : 
-this question is on leetcode premium subscription 
-lect22-3,4 : question pic
-Dry Run Example:   Original:  t h e   s k y   i s   b l u e    (i/p)
                    Reverse:   e u l b   s i   y k s   e h t
                    Word fix:  blue is sky the                  (o/p)
-approach :
	1.	Reverse the entire array.
	2.	Reverse each word individually.
*/

void reverse(vector<char>& ch, int start, int end) {
    while(start < end){
        swap(ch[start++], ch[end--]);
    }
}

void reverseWords(vector<char>& ch) {
    int n = ch.size();
    
    // Step 1: Reverse the entire array
    reverse(ch, 0, n - 1);

    // Step 2: Reverse each word
    int start = 0;
    for(int i = 0; i <= n; i++) {
        if(i == n || ch[i] == ' ') {
            reverse(ch, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    vector<char> ch = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};

    cout << "before : ";
    for (char c : ch) {
        cout << c;
    }
    cout << endl;

    reverseWords(ch);

    cout << "after : ";
    for (char c : ch) {
        cout << c;
    }
    cout << endl;
}

/*
8)max occurring characters : 
- return maximum occurring character in a input string
- https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
- time complexity O(n)
- space complexity (1)
*/

char getMaxOccChar(string s){
    int freq[26] = {0};

    for(char ch : s){
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch - 'A' + 'a';
        }
        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']++;
        }
    }

    int maxFreq = -1;
    int maxIndex = 0;
    for(int i = 0; i < 26; i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            maxIndex = i;
        }
    }
    return 'a' + maxIndex;
}

/*
9)cin.getline : jb multiple words I/P m lene ho terminal se 
- since cin stops at first space
- so using cin.getline This reads the entire line until newline 

char sentence[100];

cout<<"enter sentence : ";
cin.getline(sentence,100);
*/