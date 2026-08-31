/*SEE AT END
Sorting : Sorting means arranging data in ascending or descending order. It helps in searching, reporting, and visualization.

1)selection sort : 
- Selection Sort is a comparison-based sorting algorithm. 
- It works by repeatedly finding the minimum (or maximum) element from the unsorted part and putting it at the beginning
-lect16-1,2

-Space complexity = O(1)
-Time complexity T(n) = O(n^2)
-Best case time complexity = O(n^2)
-worst case = O(n^2)

-use case : small size , 
*/
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1;i++){
        int minIndex = i ;
        for(int j = i+1 ; j<n;j++){
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

//NOTE : in case of using (auto i : yoo) cout<<i; 
//and in case of using for(int i = 0 ; i <yoo.size();i++) cout<<yoo[i];

int main(){
    vector<int> yoo={1,5,-1,10};

    cout<<"before sort : ";
    for(auto i : yoo){
        cout<<i<<" ";
    }cout<<endl;

    selectionSort(yoo);

    cout<<"after selection sort : ";
    for(int i = 0; i < yoo.size(); i++){
        cout << yoo[i] << " ";
    }cout<<endl;
    
    return 82;
}

/*
Stable sort : A sorting algorithm is stable if two equal elements retain their relative order in the sorted output.
        eg  : (4, 'a'), (2, 'b'), (4, 'c'), (1, 'd') to (1, 'd'), (2, 'b'), (4, 'a'), (4, 'c')  
            : The (4, ‘a’) appears before (4, ‘c’), same as original.

Unstable sort : If the relative order can change, then the sorting algorithm is unstable.
            eg: (1, 'd'), (2, 'b'), (4, 'c'), (4, 'a') 
              : The order of equal elements (4s) is swapped — unstable.

see lect16-3

ques : is selection sort stable or unsatble ?
ans  : no selection sort is unsatble by default 
    as during swap(arr[i], arr[minIndex]), it may move equal elements ahead of each other, changing their original order.

----yoo----
    : Move equal elements ahead of each other” means:
    During sorting, elements with the same value are not guaranteed to stay in their original left-to-right order.
----xxx----

question : how can we make selection sort stable sort ?
anser    : Yes, but you need to avoid swapping and instead shift elements and place the min element in the correct position 
    which makes it slower and defeats its simplicity.
*/
