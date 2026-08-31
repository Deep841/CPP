/*
2D arrays 
- how 2d array stored in memory : lect23-1,2
- create 2d array : int arr[rows][cols] ; lect23-3
- @gpt basics (without vector)..bs upr upr se padh lena : below
*/
#include<iostream>
#include<vector>
using namespace std;


//print function : 2 ways (i)fixed size     (ii)dynamic size
void printArray(int arr[][3], int row, int col){
    for(int i=0 ; i<row ; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printArrayVector(const vector <vector<int>>& arr){
    for(const auto& row : arr){
        for(int val : row){
            cout<<val<<" ";
        }cout<<endl;
    }
}


//input function : 2 ways (i)fixed size     (ii)dynamic size
void inputArray(int arr[][3], int row, int col){
    for(int i=0 ;i < row ; i++){
        for(int j=0; j<col ; j++){
            cin>>arr[i][j];     //cin>>arr[j][i] for taking col-wise I/P...else phle col ke liye for loop then row ke liye.
        }
    }
}
void inputArrayVector(vector<vector<int>>& arr, int row, int col){
    for(int i=0 ; i<row ; i++){
        vector<int> temp;
        for(int j=0; j<col ; j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }
}


//linear search in 2D array :
//time complexity O(row*col)
bool linearSearch(const vector<vector<int>>& arr, int row,int col, int target){ //add const if only reading a 2d vector array
    for(int i=0 ; i< row ; i++){
        for(int j=0 ; j<col ; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}


//row-wise sum : 2ways : (i)simply just return sum  (ii)print row-wise sum 
int rowWiseSum(const vector<vector<int>>& arr, int row , int col){
    int sum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}
void printRowWiseSum(const vector<vector<int>>& arr , int row, int col){
    for(int i=0; i<row ; i++){
        int sum = 0;
        for(int j = 0 ; j<col ; j++){
            sum+=arr[i][j];
        }
        cout<<"sum of row : "<<i<<" is : "<<sum<<endl;
    }
}


//largest row sum : i.e. row wise largest sum of which row = ?
int largestRowSum(const vector<vector<int>>& arr, int row , int col){
    int maxi = INT_MIN;
    int maxiIndex = -1;

    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            maxiIndex = i;
        }
    }

    return maxiIndex;
}


// gpt se int main()
int main() {
    vector<vector<int>> v;
    int row = 2, col = 3;

    cout << "Enter elements for vector (" << row << "x" << col << "):\n";
    inputArrayVector(v, row, col);

    cout << "\nYou entered:\n";
    printArrayVector(v);

    // Linear search
    int target;
    cout << "\nEnter target to search: ";
    cin >> target;

    if (linearSearch(v, row, col, target)) {
        cout << "Target found!\n";
    } else {
        cout << "Target not found.\n";
    }

    // Row-wise total sum
    int totalSum = rowWiseSum(v, row, col);
    cout << "\nTotal sum of all elements (row-wise): " << totalSum << endl;

    // Row-wise individual sums
    cout << "\nRow-wise individual sums:\n";
    printRowWiseSum(v, row, col);

    return 0;
}