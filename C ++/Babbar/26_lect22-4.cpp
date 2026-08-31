/*
11)replace space in a str with @40
- https://www.naukri.com/code360/problems/replace-spaces_1172172
*/
#include<iostream>
#include<vector>
using namespace std;

string replaceSpace(string s){
    string temp ="";

    for (int i=0 ; i<s.length() ; i++){
        if(s[i]==' '){
            temp+="@40";
        }
        else{
            temp+=s[i];
        }
    }
    return temp;
}

//Now do it without using string temp : 
string replaceSpaceWithoutString(string s){
    int countSpaces = 0 ;
    int oldLength = s.length();

    for (char ch : s){
        if(ch==' '){
            countSpaces++;
        }
    }

    int newLength = s.length() + 2*countSpaces ;
    s.resize(newLength);

    int i = oldLength - 1;
    int j = newLength - 1;

    while(i>=0){
        if(s[i]==' '){
            s[j--]='0';
            s[j--]='4';
            s[j--]='@';
            i--;
        }
        else{
            s[j--]=s[i--];
        }
    }
    return s;
}

/*
12)reomve all occurance of a substring called part form a string s
- https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
*/

string removeAllOccurances(string s , string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

/*
13)permutation in string :
- https://leetcode.com/problems/permutation-in-string/description/
- sliding window + frequency count.
- Approach:
	•	If s1 is a permutation of a substring in s2, then both strings must have the same frequency of characters.
	•	Use two frequency arrays of size 26 (for lowercase letters):
	•	One for s1 → fixed.
	•	One for current window in s2 → sliding window of size s1.length().
*/

bool permutationInString(string s1, string s2){
    if(s1.length() > s2.length()) return false;

    vector<int> freq1(26, 0), freq2(26, 0);

    // frequency of s1 and first window of s2
    for(int i = 0 ; i < s1.length() ; i++){
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    // sliding window
    for(int i = s1.length(); i < s2.length(); i++){
        if(freq1 == freq2) return true;

        freq2[s2[i] - 'a']++;                      // Add new character
        freq2[s2[i - s1.length()] - 'a']--;        // Remove leftmost character
    }

    // Final window check
    return freq1 == freq2;
}

/*
14)remove all adjacents elements form a string : 
- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/
- approach name : stack based
- T(n) = O(n)
- space complexity = O(n) //result string
*/

string removeAdjacents(string s){
    string result;

    for(char ch : s){
        if(!result.empty() && result.back() == ch){
            result.pop_back() ;
        }
        else{
            result.push_back(ch);
        }
    }
    return result ; 
}

/*
15)string compression : 
- https://leetcode.com/problems/string-compression/description/
- "aa" → "a2"
- approach : two pointer 
    •	Read Pointer (i) scans the original array.
	•	Write Pointer (index) writes the compressed result back into chars.
	•	For every group of repeating characters, you:
	    1.	Write the character once.
	    2.	If frequency > 1, write the digits of the count (e.g., 12 → ‘1’,‘2’).
- T(n) = O(n)
- space O(1)
*/
class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;  // write pointer
        int i = 0;      // read pointer
        int n = chars.size();

        while (i < n) {
            char currentChar = chars[i];
            int count = 0;

            // Count the number of occurrences of currentChar
            while (i < n && chars[i] == currentChar) {
                i++;
                count++;
            }

            // Write the character
            chars[index++] = currentChar;

            // Write the count if > 1
            if (count > 1) {
                string countStr = to_string(count);
                for (char digit : countStr) {
                    chars[index++] = digit;
                }
            }
        }

        return index;  // new length
    }
};
