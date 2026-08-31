#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        
        //phle space print krlete hai
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }

        //stars print krlete hai
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}