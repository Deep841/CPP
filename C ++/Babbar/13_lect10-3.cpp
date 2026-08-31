//problem - 3 : find duplicate , only one duplicate.
//method - 1 : brute force approach : ki count m store krva diya sbka count/freq. yeh bekr h kuch aur tagda sochte h.
//method - 2 : using XOR operation : xor of same thing gives zero and xor of 0^1 = 1.
//vector bus array ki tarha same h but jab size bhr jata h toh voh apna size double kr leta h 
// https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1 
#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    int ans = 0 ; 
    for (int i = 0 ; i < arr.size() ; i++){
        ans = ans^arr[i];
    }
    for(int i = 0 ; i ,i<arr.size() ; i++){
        ans = ans ^ i ;
    }
    return ans;
}

//now leet code ka HW question
// https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
// XOR(^) approach sirf jab ek unique ya ek duplicate hoga tab kaam aaygi.
//here 2 approaches : 
//Method 1 : Frequency Array or Hash Map
#include<unordered_map>
//the function returns an vector so...
// void findDuplicates(vector<int>&arr){
//     unordered_map<int , int > freq;
//     for(int num : arr ){
//         freq[num]++;
//     }
//     for(auto pair : freq){
//         if (pair.second > 1){
//             cout<<"duplicate : "<<pair.first<< " , count"<<pair.second<<endl;
//         }
//     }
// }

// https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/1666114360/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int num : nums) {
            freq[num]++;
        }

        for (auto pair : freq) {
            if (pair.second > 1) {
                result.push_back(pair.first);
            }
        }

        return result;  // ✅ required return statement
    }
};

//Method 2: Sort and Compare Neighbors
// sort(arr.begin(), arr.end());
// for (int i = 1; i < arr.size(); i++) {
//     if (arr[i] == arr[i - 1]) {
//         cout << "Duplicate: " << arr[i] << endl;
//     }
// }