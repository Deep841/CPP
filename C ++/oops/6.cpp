/*
static keyword

1)static variables : 
-in a funtion : 
    variables ko static bna dete hai ek function ke ander
    they r created n initalised once for a lifetime of the program.

-in a class : 
    they r shared by all objects of the class.
    isme puri class mein ek hi x(variable) use hoga ..chahe voh kitne bhi methods ya kitne bhi dusre variables m use ho.

2)static object : 
- agar ek cls ka static object bnynge toh puri program ki lifetime tk chlgea 
    mtlb phle constructor fir int main vle program fir destructor iss order m calling hogi program ki.
*/
#include<iostream>
using namespace std;

void fun(){
    int x = 0;
    static int y = 0;
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y<<endl;
    cout<<endl;
    x++;
    y++;
}

int main(){
    fun();
    fun();  //ab harr baar sirf x=0 hi print ho rha hai kyun ki call stack fuction ke ander fun() call hone ke baad duabra delete ho rha h fun() i.e. x=0
    fun();

    return 0;
}