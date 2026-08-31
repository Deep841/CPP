#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any character or numberic: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"lower case"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"upper case"<<endl;
    }
    else {
        cout<<"numeric"<<endl;
    }
}
//this question was hw from love babbar..s