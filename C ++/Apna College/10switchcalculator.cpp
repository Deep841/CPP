//example of tenth program i.e. switch statement.
#include<iostream>
using namespace std;
int main(){

    float a,b;
    cout<<"please enter 2 numbers: ";
    cin>>a>>b;

    char op;
    cout<<"please enter operation: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;

    case '-':
         cout<<a-b<<endl;
         break;

         case '*':
         cout<<a*b<<endl;
         break;

         case '/':
         cout<<a/b<<endl;
         break;

    
    default:
    cout<<"error! kindly enter valid numbers or operation"<<endl;
        break;
    }

return 0;
}
//first example of switch statement i.e. tenth program.