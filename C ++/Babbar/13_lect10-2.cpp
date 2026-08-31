//problem - 2 : print unique number

//method - 1 
// #include<iostream>
// using namespace std;
// void printArray(int arr[], int size){
//     for(int i = 0 ; i < size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int arr[10]={0,2,8,4,5,6,4,8,2,0};
//     printArray(arr,10);

//     for(int i = 0 ; i< 10 ; i++){
//         bool isUnique = true;
//         for(int j = 0 ; j<10 ; j++){
//             if(i==j){
//                 continue;
//             }
//             if(arr[i]==arr[j]){
//                 isUnique = false ;
//                 break;
//             }
//         }
//         if(isUnique){
//             cout<<"unique at : ";
//             cout<<i<<" and elt is : "<<arr[i]<<endl;
//         }
//     }
// }

//method - 2 https://www.naukri.com/code360/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1
//isme yeh hua ki jab XOR operation lagya toh same same elements ne XOR operation ko 0 bna diya aur jab koi akela aaya fir uske 0^a=a voh element aagya.
int unique(int arr[],int size){
    int ans = 0 ;
    for(int i = 0 ; i < size ; i++){
        ans = ans ^ arr[i];
    }
    return ans ;
}

//hw - problem https://leetcode.com/problems/unique-number-of-occurrences/submissions/1665743296/
//now ab ek question hw ke liye diya hai leet code ka........
//yeh merse nhi hua ...meri approach : 
// class Solution {//for later 
// public:
//     bool uniqueOccurrences(int arr[], int size) {
//         int count[1000];
//         for(int i = 0 ; i<1000 ; i++){
//             for(int j = 0 ; j<1000 ; j++){
//                 if(i==j){
//                     continue ;
//                 }
//                 if(arr[i]==arr[j]){
//                     count[i]++;
//                 }
//             }
//         }
//         for(int i=0 ; i<1000 ; i++){
//             for (int j = 0 ; j<1000 ;j++){
//                 if(i==j){
//                     continue;
//                 }
//                 if(count[i]==count[j]){
//                     return false;
//                 }
//                 else{
//                     return true;
//                 }
//             }
//         }
//     }
// };