//switch case 
#include<iostream>
using namespace std;

int main(){

    char button;
    cout<<"button : ";
    cin>>button;

    switch(button){
        case 'a':
        cout<<"aayyyoooo"<<endl;
        break;

        case 'b':
        cout<<"bhaisabhhhh"<<endl;
        break;

        case 'c':
        cout<<"chaloooo"<<endl;
        break;
        
        default:
        cout<<"glt button press kr diya :("<<endl;
        break;
    }
    return 0 ;
}