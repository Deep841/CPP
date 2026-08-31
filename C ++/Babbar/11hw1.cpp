//reverse int
#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter n :";cin>>n;

    while(n!=0){
        int num=n%10;
        cout<<num;
        n=n/10;
    }
    return 0;
}
//this above code is not storing the number...see second part.