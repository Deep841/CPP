#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;

    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"~a: "<<(~a)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;

cout<<endl;

    cout<<(17>>1)<<endl; //right shift...17/2=8(int liya)
    cout<<(17>>2)<<endl; //17/4=4(int liya,4=2x2)
    cout<<(19<<1)<<endl; //left shift...19x2=38
    cout<<(21<<2)<<endl; //21x4=84

cout<<endl;

    int i=7;
    cout<< (++i) <<endl;// pre inc: phle hi 7 ko 8 bna dega..
    cout<< (i++) <<endl;//post increment:ab 7 ka already 8 bn chuka hai toh post inc baad mein 8 ka 9 bnyega...8 hi print krdega.
    cout<< (i--) <<endl;//post dec:ab 9 bn chuka hai i ka aur yeh baad mein dec krega 9 ko 8 mein,9hi print hoga.
    cout<< (--i) <<endl;//pre dec:ab yeh 8 ko 7 bnyega ekdum se kyu ki pre dec hai...toh 7 print hoga..
}