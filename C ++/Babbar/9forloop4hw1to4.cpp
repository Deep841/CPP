#include<iostream>
using namespace std;
int main(){
    //hw1
    for(int i=0; i<=5; i++){
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    //hw2
    // for(int i=0; i<=5; i--){
    //     cout<<i<<" ";
    //     i++;

    // }

    //hw3
    for(int i=0; i<=15; i +=2){
        cout<<i<<" ";

        if( i&1){     //yeh condition odd check krti hai,if odd then continue,if not then increment with one.
            continue;
        }

        i++;
    }
    cout<<endl;

    //hw3
    for(int i=0; i<5; i++){
        for(int j=1; j<=5; j++){
            cout<<i<<" "<<j<<endl;
        }
    }
    cout<<endl;

    //hw4
    for(int i=0; i<5; i++){
        for(int j=i; j<=5;j++){
            if(i+j ==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}
