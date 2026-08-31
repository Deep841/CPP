#include<iostream>
using namespace std;
int main(){

    int i=10, j=20, k;
//      10    9    19    20     9    20    10     19  (sath sath change hojygi)
    k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
//      9     10                     19           20  (baad mein)
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;

    return 0;
}