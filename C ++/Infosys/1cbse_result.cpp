#include<iostream>
#include<map>
#include<map>
using namespace std;

int main(){
    int N;cout<<"N : ?";cin>>N;
    int count = 0;

    while(N--){
        int sum = 0;
        bool fail = false;

        for(int i=0 ; i<5 ; i++){
            int mark;
            cin>>mark;
            if(mark < 33)   fail = true;
            sum += mark;
        }

        if(!fail && sum>= 33*5)  count++;
    }
    cout<<count;
}