#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        if(abs(v[i] - v[i-1]) <= 1)  
            return false;
    }
    return true;
}

int main(){
    int N; 
    cin >> N;

    vector<int> A(N);
    for(int i = 0; i < N; i++)  
        cin >> A[i];

    sort(A.begin(), A.end());

    vector<int> ans(N);
    int l = 0, r = (N+1)/2, i = 0;

    while(l < (N+1)/2){
        ans[i++] = A[l++];
        if(r < N) 
            ans[i++] = A[r++];
    }

    if(isValid(ans)){
        for(int x : ans)    
            cout << x << " ";
    }
    else{
        cout << -1;
    }

    return 0;
}