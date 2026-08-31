#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter ant two integers:\t";
    cin>>a>>b;
    while(1)
    {
        cout<<"press 1 for addition\n";
        cout<<"press 2 for subtraction\n";
        cout<<"press 3 for multiplication\n";
        cout<<"press 4 for division\n";
        cout<<"press 5 for remainder\n";
        cout<<"press 6 for exit\n";
        int ch;
        cin>>ch;
        switch(ch){
            case 1: cout<<"sum of numbers is: "<<a+b<<"\n";
            break;
            case 2: if (a>b)
            {
                cout<<"difference is "<<a-b<<"\n";
            }else {
                cout<<"difference is"<<b-a<<"\n";
            }
            break;
            case 3: cout<<"multiplication is"<<a*b<<"\n";
            break;
            case 4:
            if(b==0)
            {
                cout<<"division not possible as divisor is 0\n";
            }else {
                cout<<"quptient is"<<a/b;
            }
            break;
            case 5:
            if(b==0){
                cout<<"remainder can't be find"<<"\n";
            }else{
                cout<<"remainder is "<<a%b<<"\n";
            }
            break;
            case 6:
            exit(0);
            break;
            default:
            cout<<"enter a valid choice\n";
            break;

        }
    }
    return 0;
}