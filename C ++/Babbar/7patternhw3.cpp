#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n ;
    int row=1;
    char start = 'A';
    while(row<=n){
        int col =1;
        while(col<=n){
            
            cout<<start<<" ";
            start ++;
            col++ ;
        }
        cout<<endl;
        row++;
    }
}
//agar kahi pr count ya start aayega toh usse phle while loop se phle likhna hai..
//aur agr kahi char vgera intorduce krvna hai toh second while loop ke ander likhnge...jaise pichle hw q m tha..