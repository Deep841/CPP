//Binary search - problems
//problem - 1 : first and last position of an element in sorted array 
//lect13-1

#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){
    int start = 0 , end = size-1;
    int ans = -1 ;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1 ;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key){
    int start = 0 , end = size - 1;
    int ans = -1 ;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            ans = mid ;
            start = mid + 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[5]={1,1,2,4,5};
    cout<<"first occurance of 1 is at index : "<<firstOccurance(arr,5,1)<<endl;
    cout<<"last occurance of 1 is at index : "<<lastOccurance(arr,5,1)<<endl;
}
// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?leftPanelTabValue=SUBMISSION
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

//problem - 2 : number of occurance
//no. of occurance = last index - first index + 1
