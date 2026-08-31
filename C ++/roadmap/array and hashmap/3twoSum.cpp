/*
two sum : 
- https://leetcode.com/problems/two-sum/description/
- brute force approach see pic 3....O(n^2)
- hash map approach see pic 4...O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashmap;  // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int left = target - nums[i];

        if (hashmap.find(left) != hashmap.end()) {
            return {hashmap[left], i};  
        }
        hashmap[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No valid pair found.\n";
    }

    return 0;
}