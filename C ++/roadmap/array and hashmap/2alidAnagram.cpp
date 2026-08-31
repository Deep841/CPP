/*
Valid Anagram : 
- 2 (pic)
- An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.
- https://leetcode.com/problems/valid-anagram/description/
*/

#include<iostream>
#include<vector>
using namespace std;

bool validAnagram(string s, string t){
    vector<int> freq(26, 0);
    for(char ch : s)    freq[ch-'a']++;
    for(char ch : t)    freq[ch-'a']--;

    for(int count : freq){
        if(count!=0)    return false;
    }
    return true;
}
//O(n) time      O(1) space

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (validAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}