#include<iostream>
#include<fstream>
using namespace std;
int main(){

    //opening file using constructor and writing in it.
    string st = " harry bhai 2";
    ofstream out("sample.txt");//write operation
    out<<st;

    //opening file using constructor and reading it.
    string st2 ;
    ifstream in("sample2.txt");
    getline(in,st2);
    cout<<st2;

    return 0;
}