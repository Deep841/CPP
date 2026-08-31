/*
2)rotated sorted array :
- naam pe jao 
- https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/1682411141/
*/

#include<iostream>
#include<vector>
using namespace std;

bool sortedRotatedArray(vector<int>& arr){
    int count = 0 ; 
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>arr[(i+1)%arr.size()]){//yeh condition check kr rhi hai ki kitni baar order break hua h
            count ++;
        }
    }
    return count<=1;
}

/*
Expression: (arr[i] > arr[(i + 1) % n])

This is checking where the ascending order breaks.
	•	In a sorted array, arr[i] <= arr[i + 1] for all valid i.
	•	In a sorted and rotated array, this condition breaks only once (i.e., arr[i] > arr[i + 1] happens at one position — the rotation point).

We wrap around using (i + 1) % n to make the array circular so we can compare the last element with the first element.
*/

/*
This means:
	•	The array should break the sorted order at most once.
	•	count == 0: Perfectly sorted, not rotated (still acceptable).
	•	count == 1: Sorted and rotated → ✅
	•	count > 1: Not sorted or not rotated correctly → ❌
*/

/*
3)sum of two arrays : 
- slect21-4,4.1
- https://www.naukri.com/code360/problems/sum-of-two-arrays_893186
- You are given two arrays arr1 and arr2, where each element represents a digit. Return an array containing the sum of the two numbers.
*/
vector<int> reverse(vector<int>&arr){
	int start = 0;
	int end = arr.size()-1;
	while(start<=end){
		swap(arr[start++],arr[end--]);

	}
	return arr;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i = n-1;
	int j = m-1;

	vector<int> ans;
	int carry = 0;

	//both array ko add : 
	while(i>=0 && j>=0){
		int sum = a[i]+b[j]+carry;
		carry = sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}

	//if first array is left : 
	while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}

	//if second array bach gya : 
	while(j>=0){
		int sum = b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}
	
	//if last m carry bacha ho : 
	while(carry!=0){
		int sum = carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}

	//ab answer vle array ko reverse kr dete hai kyun ki elts aage se aad hue honge 
	//ans vale array m due to push_back
	reverse(ans);
	return ans;
}