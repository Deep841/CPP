#include<iostream>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

// reverse an array
void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        // int temp;
        // temp = arr[start];
        // arr[start] = arr[end];
        // arr[end]=temp;
        start++;
        end--;
    }
}

//unique number of occurances 
bool uniqueOccurrences(int arr[], int size){
    map<int,int>freq;

    for(int i =0 ; i < size; i++){
        freq[arr[i]]++;
    }

    set<int> s;
    for(auto i : freq){
        s.insert(i.second);
    }
    return s.size()==freq.size();
}

//Find One Duplicat
int findOneDuplicate(vector<int> &arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    for(int i=1; i < arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}

vector<int> findAllDuplicates(vector<int> &arr){
    unordered_map<int,int> freq; //to count the frequency of elts 
    vector<int> result;

    //to count the frequencies
    for(int i : arr){
        freq[arr[i]]++;
    }

    for(auto i : freq){
        if(i.second>1){
            result.push_back(i.first);
        }
    }
    return result;
}


int main(){

    //reverse an int
    int n;cout<<"n? : ";cin>>n;

    int reversed = 0;
    while(n!=0){
        int n = n%10;
        reversed = reversed*10 + n;
        n = n/10;
}


//unique elt
int size;
// cout<<"size? : ";cin>>size;
int arr[10];
int ans = 0;
for(int i=0; i<size; i++){
    ans = ans ^ arr[i];
}
return ans;



}