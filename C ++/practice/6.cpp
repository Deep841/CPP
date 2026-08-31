#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int x=1;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}
//this wasn't asked lets try it again.