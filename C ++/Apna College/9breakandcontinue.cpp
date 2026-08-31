#include<iostream>
using namespace std;
int main()
{

    int pocketmoney;
    cin>>pocketmoney;

    int date;
    cin>>date;
    
    for(int date=1;date<=30;date++){

        if (date%2==0){
            break;
        }
        
        if(pocketmoney<=300){
            cout<<"not going out!\n";
            break;
        }
        cout<<"go out today!"<<endl;
        pocketmoney=pocketmoney-300;
        cout<<"pockemoney left is:"<<pocketmoney<<endl;
        
    }
    return 0;
}
//ninth program/code.
//jugadi sa laga.
//ab isme yeh kr diya maine ki pocketmoney hum btynge aur fir pta 
//chlega ki ja skte hai ya nhi aur agr ja skte hai toh kitni 
//pocketmoney bachegi