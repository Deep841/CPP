#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        char start = 'A' + n -row;
        while(col<=row){
            cout<<start;
            start++;
            col++;

        }
        cout<<endl;
        row++;
    }
}
//isme second while loop mein col<=row hai instead n...