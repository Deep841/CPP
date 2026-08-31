//reverse an array
#include<iostream>
using namespace std;
void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1 ;
    while(start<=end){
        swap(arr[start] , arr[end]);
        start ++;
        end --;
    }
}
//void print function 
//int main