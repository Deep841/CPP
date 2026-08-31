/*
Aggressive Cow problem : 
k = aggressive cows , stalls = array (iss array m cows ki position di hogi), 
task = assign cows to stalls...abhi tak books students ko assign ki thi Such that max no. of pages assigned to student were mini such that ...
     = k cows ko stalls vale array ki values pr place krna hai such that ...see lect 15-5 for distance...
such that = minimum distance between cows is maximum
return = largest mini distance

agar cows vale m possible solution mil gya toh bade part m jynge mtlb ans = mid; ke baad start = mid + 1; krnge 
instead of studnets/books vale problrm m ans=mid; ke baad end = mid - 1; kr rhe the 
kyun ki = cows vale m minimum distance btw cows ko maximum krna h and students vali problem m books(no. of pages) ko minimum krna h.

why binary seach : jab hume pata lgta hai ki search space ke mid ka left part ignore krna h ya right part ignore krna hai

https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

//NOTE : 
//front and back when we need value .....aur jab sort ya loop then begin and  end 
// front() and back() → when you want values , begin() and end() → when you want iterators (for loops or STL algorithms)

bool isPossible(vector<int> &stalls, int k , int mid ){
    int cowsCount = 1;
    int lastPos = stalls[0];

    for(int i=0 ; i < stalls.size(); i ++){
        if(stalls[i]-lastPos>=mid){
            cowsCount++;
            if(cowsCount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls , int k){
    sort(stalls.begin(),stalls.end());

    int start = 1;
    int end = stalls.back()-stalls[0];
    int ans = -1;

    while(start<=end){
        int mid = start + (end - start)/2;
        if(isPossible(stalls,k,mid)){
            ans = mid ;
            start = mid +1 ;
        }
        else{
            end = mid - 1;
        }
    }
    return ans ;
}

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};  // Positions of stalls
    int cows = 3;  // Number of aggressive cows to place

    int result = aggressiveCows(stalls, cows);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}