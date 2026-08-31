#include<iostream>
#include<vector>f
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i =0; i<n; i++) cin>>a[i];

    int maxDist = 0;
    int last = -1;

    for(int i =0; i<n ;i++){
        if(a[i] == 1){
            if(last == -1){
                maxDist = max(maxDist, i);
            }
            else{
                maxDist = max(maxDist, (i-last)/2 );
            }
            last = i;
        }
    }

    if( a[n-1] == 0){
        maxDist = max(maxDist, n-1 -last);
    }
    cout<<maxDist;
}