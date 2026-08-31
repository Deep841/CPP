#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i=1;

    int sum=0;

    while(i<=n){

        // cout<<i<<" ";   //agar yaha pr \n quottations mein lgya toh harr number next line m print hoga.
        // i++;

        //now lets see sum via while loop.

        sum=sum+i;
        i++;
        
    }
    cout<<"sum of first n numbers is: "<<sum<<endl;

}