#include<iostream>
using namespace std;
int main(){

    for(int i=0;i<100;i++)
    {
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
//first example of ninth program.
//here we are printing all the numbers from 1 to 100 except those which are
//multiple of three... 