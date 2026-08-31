#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int row =1;
//    char start='A';
    while(row<=n){
        int col=1;
        while(col<=n){
           char start = 'A' + row + col -2;
            cout<<start<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}