//problem : sort 0 1 2
//iss se phle lets do Sort 0 1 : 
#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortZeroOne(int arr[], int n){
    int start =0, end= n-1;
    while(start<end){
        while(arr[start]==0 && start<end){
            start ++;
        }
        while(arr[end]==1 && start<end){
            end --;
        }
        while(start<end){
            swap(arr[start],arr[end]);
            start ++;
            end --;
        }
    }
}
int main(){
    int arr[6]={1,0,0,1,1,1};
    printArray(arr,6);
    sortZeroOne(arr,6);
    printArray(arr,6);
}

//now sort 0 1 2
// https://www.naukri.com/code360/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1
void sort012(int *arr, int n) {
    int start = 0;       // handle 0s
    int meow = 0;        // current index (like mid)
    int end = n - 1;     // handle 2s

    while (meow <= end) {
        if (arr[meow] == 0) {
            swap(arr[start], arr[meow]);
            start++;
            meow++;
        } 
        else if (arr[meow] == 1) {
            meow++;
        } 
        else if (arr[meow] == 2) {
            swap(arr[meow], arr[end]);
            end--;
        }
    }
}

//extra : leet code - https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0, meow = 0, end = nums.size() - 1;

        while (meow <= end) {
            if (nums[meow] == 0) {
                swap(nums[meow], nums[start]);
                meow++;
                start++;
            }
            else if (nums[meow] == 1) {
                meow++;
            }
            else if (nums[meow] == 2) {
                swap(nums[meow], nums[end]);
                end--;

            }
        }
    }
};
