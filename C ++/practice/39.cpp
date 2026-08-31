#include<iostream>
#include<fstream>
using namespace std;
using namespace std;
int main(){

    // ofstream out("hi.txt");
    // string name;
    // cout<<"kya likhna h? : ";
    // cin>>name;
    // getline(cin, name);
    // out<<name;
    // out.close();

    fstream out("hi.txt");
    string name;
    cout << "kya likhna h? : ";
    getline(cin, name);
    out << name;        
    out.close();

    // cout << "Content written to hi.txt." << endl;

    ifstream in("hi.txt");
    string content;
    getline(in, content);
    cout<<content<<endl;
    in.close();

    return 0;
}