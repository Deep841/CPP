/*
top k frequent elements : 
- https://leetcode.com/problems/top-k-frequent-elements/
- 
*/

#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;

//approach 1 : Bucket sort
//O(n) = both time n space complexities
vector<int> yoo(vector<int>& nums, int k){
    unordered_map<int, int> freq;

    for(int num : nums){
        freq[num]++;
    }

    vector<vector<int>> bucket(nums.size() + 1);
    for(auto & pair : freq){
        bucket[pair.second].push_back(pair.first);
    }

    vector<int> result;
    for(int i=nums.size() ; i>=0 && result.size()<k ; i-- ){
        for(int num : bucket[i]){
            result.push_back(num);
            if(result.size()==k)    break;
        }
    }
    return result;

}

//approach 2 : using min heap (priority queue)
//O(nlogk) = time complexitiy
//O(n) = space complexity
vector<int> yoo2(vector<int> & nums, int k ){
    unordered_map<int,int> freq;

    for(int i : nums){
        freq[i]++;
    }

    //sar ke upr se so...skipping
}