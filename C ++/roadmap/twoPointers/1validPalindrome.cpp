/*
valid palindrome : 
- https://leetcode.com/problems/valid-palindrome/description/
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//use when dont have to use stl.
// char tolowercase(char ch){
//     if(ch>='A' && ch<='Z') return ch-'A'+'a';
//     return ch;
// }

// bool isalphanumeric(char ch){
//     return (ch>='A'&&ch<='Z' || ch>='a'&&ch<='z' || ch>='0'&&ch<='9');
// }

bool ispalindrome(string s){
    int start = 0 ;
    int end = s.length();

    while(start<end){
        while(start<end && isalnum(s[start])) start++;
        while(start<end && isalnum(s[end])) end++;

        if(islower(s[start])!=islower(s[end])) return false;

        start++; end--;
    }
    return true;
}