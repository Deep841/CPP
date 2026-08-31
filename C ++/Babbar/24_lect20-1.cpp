/* Problems : 
1)Reverse an array after an index M :
https://www.naukri.com/code360/problems/reverse-the-array_1262298?leftPanelTabValue=SUBMISSION

2)merge two sorted arrays : 
-resulatant array bhi sorted ho
-lect20-1
- https://leetcode.com/problems/merge-sorted-array/description/
-HW question : https://leetcode.com/problems/merge-sorted-array/submissions/1680745438/

*/

#include<iostream>
#include<vector>
using namespace std;

//2)merge two sorted arrays : 
void mergeSortedArrays(vector<int> &arr1, int n, vector<int> &arr2, int m, vector<int> &arr3){
    int i=0 , j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++]=arr2[j++];
    }
}

//int main from gpt : 
int main() {
    vector<int> arr1 = {1, 4, 7, 10};
    vector<int> arr2 = {2, 3, 6, 8, 9};
    
    int n = arr1.size();
    int m = arr2.size();

    vector<int> arr3(n + m);

    mergeSortedArrays(arr1, n, arr2, m, arr3);

    cout << "Merged Sorted Array: ";
    for(int i = 0; i < n + m; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}