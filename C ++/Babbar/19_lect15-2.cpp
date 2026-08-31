/*
Painter Partition Problem : lect15-4
                          : https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION


Task : Paint all boards such that the time taken (i.e., max time by a painter) is minimized.


Approach (Same as Book Allocation): Step 1 : Define isPossible()
                                           : Can we assign boards to k painters such that no painter paints more than mid units of board length?
                                    Step 2 : Binary Search
                                           : Binary search between max(arr) and sum(arr) to find minimum possible max time.


Time Complexity  : O(n * log(sum - max))
Space Complexity : O(1) (constant space)

*/
#include<iostream>
#include<vector>
using namespace std;

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int k , int mid){
    int painters = 1;
    int boardSum = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] > mid){
            return false;
        }
        if(boardSum + arr[i] <= mid){
            boardSum += arr[i];
        }
        else{
            painters++;
            if(painters > k){
                return false;
            }
            boardSum = arr[i];
        }
    }
    return true;
}

int painterPartition(vector<int> &arr, int n, int k){
    if(k > n){
        return -1;
    }
    int start = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        start = max(start, arr[i]);
    }
    int end = sum;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> boards = {10, 20, 30, 40};
    int k = 2; // painters
    int n = boards.size();

    int result = painterPartition(boards, n, k);
    cout << "Minimum time to paint all boards: " << result << endl;

    return 0;
}