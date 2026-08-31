#include<iostream>
using namespace std;
int main(){

    int i=0;
//     0     0     1     1   (yaha subko add ni krna sign diff)(0-0+1-1=0ans)
    i=i++ - --i + ++i - i--;  
//     1                 0   (baad mein hongi)
    cout<<i<<endl;

    return 0;
}
//part3 of eleventh program i.e. operators
//zero output aaya kyu ki last mein humne mein se 1 ko sub kiya.
