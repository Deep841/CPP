#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter n : ";cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
//agar subse ander vale for loop i.e. j vala for loop me koi variable initialise kiya toh uski value same hi rahegi.
//agar koi variable i vale for loop mein initialise kiya toh o/p ki starting same rahegi aur along i/row values inc  hogi.
//agar subse phle i.e. loop se phle initialise kiya toh value badhti hi jygi from statring point ot end point.