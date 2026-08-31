#include<iostream>
using namespace std;

int MFR(int result[],int n){

    int val;
    if (result[n]!=-1){
        return result[n];
    }

    if (n == 1){
        val = 1;
    }
    else if(n==2){
        val = 1;
    }
    else{
        val = MFR(result,n-2);
        val = val + MFR(result,n-1);
    }

    result[n] = val ; 
    return val;
}

int MF(int result[] , int n){
    for(int i= 1 ; i<=n ; i++){
        result[i] = -1;
    }
    return MFR(result,n);
}

int main(){
    int n ;
    cout<<"n : ";
    cin>>n;

    int result[n];

    cout << "Fibonacci(" << n << ") = " << MF(result,n) << endl;
    return 0;
}