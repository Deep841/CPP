#include<iostream>
using namespace std;
 int main (){

    int i=1;
    int j=2;
    int k;
//    1   2    1    2      3    4          (inn subka sum krnge)
    k=i + j + i++ + j++ + ++i + ++j;
//            2      3                     (baad mein hongi yeh)
    cout<<i<<" "<<j<<" "<<" "<<k<<endl;

    return 0;
 }