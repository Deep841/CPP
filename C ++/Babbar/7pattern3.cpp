#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){

            // cout<<j;
            // j++;
            // //ab yaha pr jonsa column hai voh print hua hai...

            cout<<n-j+1;
            j++;
            //yaha pr ulti ginti j print hui hai..
        }
        cout<<endl;
        i++;
    }
}