/*
Insertion Sort : 
@gpt
-Insertion Sort is a simple sorting algorithm that works like sorting playing cards in your hand.
-Idea : We assume the first element is sorted. Then for each element, 
        we pick it and place it at the correct position among the previously sorted elements.
-How It Works:
	1.	Start from index 1 to n-1.
	2.	Pick the current element (key).
	3.	Compare it with elements before it.
	4.	Shift all greater elements one position ahead to make space.
	5.	Insert the key at its correct position.


question : selection vs bubble sorts observation ... see lect18-1
answer : Your Observation:

Can we say:
	•	In Selection Sort, the smallest element comes to the left first, then second smallest, and so on
	•	In Bubble Sort, the largest element bubbles to the right first, then second largest, and so on


@sir
-insertion sort m hum shift krte hai swap nhi
-lect18-2
-approach lect18-3, 4, 5
-(n-1)rounds
-it is adaptable algo , stable sort 
-time complexity O(n^2)....best case O(n)
- https://www.naukri.com/code360/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2
*/

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();

    for(int i = 1 ; i < n ; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            //shift krnge bade elts ko right m
            arr[j+1]=arr[j];
            j--;
        }
        //loop correct position se ek phle hoga toh aur while loop ke bhr aa jynge toh ab key ko j+1 pe daalnhge correct bhai
        arr[j+1]=key;
    }
}

//int main() form gpt
int main(){
    vector<int> arr = {9, 3, 7, 1, 5};

    cout << "Before sorting: ";
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    insertionSort(arr);

    cout << "After insertion sort: ";
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
/*
Jab tak:
- j valid index hai
- Aur arr[j] > key hai

Tab tak:
- arr[j] ko ek step aage shift karo (arr[j + 1] = arr[j])
- j-- ? peeche jao aur agli comparison karo
- Isse sorted part mein key ke liye sahi jagah ban jaati hai.

-loop correct position se phle hoga toh aur while loop ke bhr aa jynge toh ab key ko j+1 pe daalnhge correct bhai ?
*/