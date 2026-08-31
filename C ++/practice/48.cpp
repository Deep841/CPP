//permutation in string : 
#include<iostream>
#include<vector>
using namespace std;
bool inConclusion(string s1 , string s2){
    vector<int> freq1(26,0) , freq2(26,0);

    for(int i = 0 ; i < s1.length() ; i++){
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    //sliding window : 
    for (int i = s1.length() ; i<s2.length() ; i++){
        if(freq1==freq2) return true;

        freq2[s2[i] - 'a']++;   //add new alphabet
        freq2[s2[i - s1.length()] - 'a']--;     //remove leftmost alphabet
    }
    return freq1==freq2 ;
}
int main() {
    string s1 = "ab", s2 = "eidbaooo";
    cout << (inConclusion(s1, s2) ? "True" : "False") << endl; // Output: True
}
