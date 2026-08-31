/*
Bubble sort :
@chat gpt 
- Bubble Sort is a simple comparison-based sorting algorithm.
It repeatedly compares adjacent elements and swaps them if they are in the wrong order (for ascending: left > right).
This process continues until the array is fully sorted.
-It’s called “Bubble” sort because the largest elements “bubble up” to the end in each pass.

@sir
-lect17-1
-in every round the largest elt will return at right of the array i.e. in the i-th round the i-th elt will be at its right place
-total n-1 rounds
-lect17-2
- i for(0 to n-1) , j for(0 to n-i-1)
- j and j+1 elts compare krnge and if a>b then swap ... if a<b then ignore

-lect17-3 time complexity O(n^2) ... n=size of array....best case T(n)=O(n)
-space complexity O(1)
-see at end
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbleSort(vector<int> &arr) // int n ...no need)
{
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        bool swapped = false;

        for(int j = 0 ; j< n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true ; 
            }
        }
        if(!swapped){
            break;
        }
    }
}

//best case T(n)=O(n)
//int main for gpt
int main() {
    vector<int> arr = {5, 1, 4, 2, 8};

    cout << "Before Sorting: ";
    for(int val : arr) cout << val << " ";
    cout << endl;

    bubbleSort(arr);

    cout << "After Bubble Sort: ";
    for(int val : arr) cout << val << " ";
    cout << endl;

    return 0;
}
/*
question : is bubble sort a stable or unstable sort ? 
answer : it is a stable sort as adjacent elts are swapped and equal elts r not swapped ...so original order of same valued elts remains same

question : in place sort ?
answer : 
-An in-place sorting algorithm is one that uses only a constant amount (O(1)) of extra memory to sort the input data.
-Explanation:
	•	The sorting is done within the original data structure (like the input array or list).
	•	It does not use any additional significant space, such as a new array, stack, or recursion stack (beyond constant space).
	•	It might rearrange the elements by swapping them or shifting them around, but does not create a full copy of the data.
-Analogy:
Think of sorting clothes on a table.
If you just move clothes around on the same table, it’s in-place.
But if you use an extra basket to hold and rearrange clothes, it’s not in-place.
-In-place → saves space.

quiz : https://www.geeksforgeeks.org/quizzes/top-mcqs-on-bubblesort-algorithm-with-answers/s
https://www.naukri.com/code360/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION
*/