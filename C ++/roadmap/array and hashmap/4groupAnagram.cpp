/*
Group Anagrams : 
- https://leetcode.com/problems/group-anagrams/description/
- pic 5
- Time and Space:
	•	Time: O(N·KlogK) → N = no. of strings, K = avg length of each string (due to sorting)
	•	Space: O(N·K) → for map and result
*/

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<vector<string>> groupAnagram(vector<string>& strs){
    unordered_map<string, vector<string>> hashmap ;

    for(string original : strs){
        string sorted = original;
        sort(sorted.begin(), sorted.end());
        hashmap[sorted].push_back(original);
    }

    vector<vector<string>> result;
    for(auto& yo : hashmap){
        result.push_back(yo.second);
    }
    return result;
}

//gpt se int main
int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> grouped = groupAnagram(strs);

    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : grouped) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}