#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // connecting our file with out system
    ofstream out("hi.txt");

    //creating a string and filling it with the string entered by the user 
    string name;
    cout<<"ur name : ";
    cin>>name;

    out<<"my name is "+name;
    out.close();

    //now for read from the same file 
    ifstream in("hi.txt");
    string content;
    // in>>content;
    getline(in, content);
    cout<<content;
    in.close();
}