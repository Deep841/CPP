/*
print like wave : 
- https://www.naukri.com/code360/problems/print-like-a-wave_893268
- lect23-4,5
- two methods : j&1(odd) or j%2==0(even)
- T(n)=O(row*col)
- space omplexity = O(row*col)
- space complexity could be O(1) if we only print the vecotr instead of asn.push_back(arr[][])
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> ans;
    for (int j = 0; j < mCols; j++) {
        if (j & 1) {
            // odd - bottom to top
            for (int i = nRows - 1; i >= 0; i--) {
                ans.push_back(arr[i][j]);
            }
        } else {
            // even - top to bottom
            for (int i = 0; i < nRows; i++) {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

/*
spiral print : 
- https://leetcode.com/problems/spiral-matrix/
- lect23-6
- O(row*col)
*/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int startRow = 0 ;
        int endRow = row-1;
        int startCol = 0 ;
        int endCol = col-1;

        int count = 0;
        int total = row*col;
        vector<int> ans;

        while(count<total){
            //starting row : starting col to ending col 
            for(int index = startCol ; count<total && index<=endCol ; index++){
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            //ending col : starting row to ending row
            for(int index = startRow ; count<total && index<=endRow ; index++){
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            //ending row : last col to first col
            for(int index = endCol ; count<total && index>=startCol ; index--){
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            //starting col : last row to first row
            for(int index = endRow; count<total && index>=startRow ;index-- ){
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};



/*
rotate matrix by 90 degree : 
- Steps:
	1.	Transpose the matrix – convert rows to columns.
	2.	Reverse each row – this completes the 90-degree rotation.
*/
void rotate(vector<vector<int>>& matrix){
    int n = matrix.size();

    //step 1 : transpose the matrix 
    for(int i = 0 ; i < n ; i++){
        for(int j=i+1 ; j<n ; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //step 2 : reverse rows 
    for(int i = 0 ; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}




int main() {
    int nRows = 3, mCols = 3;
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = wavePrint(arr, nRows, mCols);

    cout << "Wave Print Output:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}