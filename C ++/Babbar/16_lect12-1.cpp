/*
Binsry search : O(logn)

Linear search : O(n)
              : ek for loop laga rhe the arr[] pe aur agar aar[i]==key hogya toh key found else key not found 
              : time complexity O(n)
              : n=size array toh mtln n baar comparisions

Binary search : sirf monotonic functions(inc or dec functions) pe lgta h = condition
              : mid = (s + e)/2 fir comaprision krnge mid aur key ka ...agar mid>key then end = mid -1 ...agar mid<key then start = mid+1

*/

//method-1 : everything in int main()
// #include<iostream>
// using namespace std ;
// #include<algorithm> //for sort

// //if bulit-in sort() fucntion is not available
// void bubbleSort(int arr[], int size){
//     for(int i=0; i<size-1 ; i++){
//         for(int j=0 ; j<size-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     int size;
//     cout << "size : ";
//     cin >> size;

//     int arr[100];
//     cout << "elts of array in sorted manner : " << endl;
//     for(int i = 0 ; i < size ; i++){
//         cin >> arr[i];
//     }

//     //if I/P elements are not in sorted manner then we will use sort function i.e. Uses IntroSort (hybrid of QuickSort, HeapSort, InsertionSort)
//     //use #include<algorithm> and its Time Complexity: O(n log n)
//     sort(arr,arr+size);

//     cout << "Sorted array: ";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int key;
//     cout << "key? : ";
//     cin >> key;

//     int start = 0;
//     int end = size - 1;
//     bool keyFound = false;

//     while(start <= end){
//         int mid = (start + end) / 2;

//         if(arr[mid] == key){
//             cout << "key found at index: " << mid << endl;
//             keyFound = true;
//             break;
//         }
//         else if(arr[mid] > key){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }

//     if(!keyFound){
//         cout << "key not found" << endl;
//     }

//     return 0;
//     //The above code as time complexity as O(logn) and space complexity as O(1)
// }

//method-2 : 
//now binary search using funtion
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;

//     while (start <= end) {
//         int mid = start + (end - start) / 2;  // To avoid overflow

//         if (arr[mid] == key)
//             return mid;  
//         else if (arr[mid] > key)
//             end = mid - 1;
//         else
//             start = mid + 1;
//     }

//     return -1;  
// }

// int main() {
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;

//     int arr[100];
//     cout << "Enter elements in sorted order: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter key to search: ";
//     cin >> key;

//     int index = binarySearch(arr, size, key);

//     if (index != -1)
//         cout << "Key found at index: " << index << endl;
//     else
//         cout << "Key not found." << endl;

//     return 0;
// }

//method-3 : using STL - container
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int size;cout<<"Size? : ";cin>>size;

    vector<int> nums(size);

    cout<<"elements are : ";
    for(int i = 0; i<size; i++){
        cin>>nums[i];
    }

    sort(nums.begin(),nums.end());

    int key;cout<<"key? : ";cin>>key;

    cout<<"using binary search, elt (1 or 0): "<<binary_search(nums.begin(),nums.end(),key)<<endl;
}
/*
NOTE : ionstead of mid=(s+e)/2 here dono int ko add krne se aisa ho skta hai ki mid ki range aukat ke bhr ho jye
     : we will use chalaki i.e. mid = s + (e-s)/2 ... dono solve krne pe equal hi aaynge
     : see lect12-1
*/