#include<iostream>
#include<fstream>
#include<fstream>
using namespace std;
int main(){

    ofstream out;
    out.open("hi3.txt");
    out<<"line 1\n";
    out<<"line 2\n";
    out<<"line 3\n";
    out.close();

    ifstream in;
    string st;
    in.open("hi3.txt");

    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}