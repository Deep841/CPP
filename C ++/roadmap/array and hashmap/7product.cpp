/*
Product of Array Except Self : 
- https://leetcode.com/problems/product-of-array-except-self/
- 7, 8
- Time and Space Complexity
	•	Time: O(n)
	•	Space: O(1) (excluding the output array)
*/

/*
NOTE : 
- using nums.size() inside vector<int> result(nums.size(), 1); incerese the time of execution 
  but if we use int n = nums.size(); and then vector<int> result(n, 1); then this case has lower time of execution.
-  Recommendation : 
    int n = nums.size();
    vector<int> result(n, 1);
    for(int i = 0; i < n; i++) { ... }
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int>& nums){
    int n = nums.size();
    vector<int> result(n,1);

    int prefix =1 ;
    for(int i= 0 ; i<n ; i++){
        result[i] = prefix;
        prefix*=nums[i];
    }

    int postfix=1;
    for(int i=n-1 ; i>=0; --i){
        result[i]*= postfix;
        postfix *= nums[i];
    }

    return result;
}


int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = product(nums);

    cout << "Product array except self: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}