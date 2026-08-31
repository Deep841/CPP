#include<iostream>
using namespace std;
int main (){

    int i=1;
//     1     3                 (inn subka sum hoga)
    i=i++ + ++i;
//     2                       (baad mein hongi)    
    cout<<i<<endl;

    return 0;
}
//eleventh program
//here we have seen pre and post incrementers working.