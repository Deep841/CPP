/*
bianry search in 2d arrays : 
problem : search in 2d array - I
- https://leetcode.com/problems/search-a-2d-matrix/description/
- O(log(m * n))
- O(1)
*/
#include<iostream>
#include<vector>
using namespace std;

bool searchIn2dArray(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0; 
    int end = row*col - 1;

    while (start<=end)
    {
        int mid = start + (end-start)/2;
        int element = matrix[mid/col][mid%col];

        if(target==element){
            return true;
        }
        else if(target>element){
            start = mid + 1 ;
        }
        else{
            end = mid - 1;
        }
    }
    return false;
}


/*
search 2d matrix - II
- https://leetcode.com/problems/search-a-2d-matrix-ii/
- staircase search
*/

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0;
    int col = matrix[0].size() - 1;

    while (row < matrix.size() && col >= 0) {
        int current = matrix[row][col];

        if (current == target) {
            return true;
        } else if (current > target) {
            col--; 
        } else {
            row++; 
        }
    }

    return false;
}