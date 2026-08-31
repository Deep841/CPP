#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter any two integer \t";
    cin>>a>>b;

    while(1){
        cout<<"press 1 for addition\n";
        cout<<"press 2 for subraction\n";
        cout<<"press 3 for multiplcation\n";
        cout<<"press 4 for division\n";
        cout<<"press 5 for remainder\n";
        cout<<"press 6 for exit\n";
       
        int ch;
        cout<<"enter your choice\n";
        cin>>ch;
        switch(ch){
            case 1: cout<<"sum of numbers is : "<<a+b<<endl;
            break;

            case 2:if (a>b){
                cout<<"difference is : "<<a-b<<endl;
            }else{
                cout<<"difference is : "<<b-a<<endl;
            }
            break;

            case 3: cout<<"multiplication is : "<<a*b<<endl;
            break;

            case 4: if(b==0){
                cout<<"dividion is not possible"<<endl;
            }else{
                cout<<"quotient is : "<<a/b;
            }
            break;

            case 5: if(b==0){
                cout<<"remainder can't be find"<<endl;
            }else{
                cout<<"remainder is : "<<a%b<<endl;
            }
            break;

            case 6:
                exit(0);
            break;

            default : 
            cout<<"enter a valid choice"<<endl;
            break;
        }

    }
    return 0;
}