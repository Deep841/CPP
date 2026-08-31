#include<iostream>
using namespace std;
int main(){

    char button;
    cout<<"kindly press a button ";
    cin>>button;

//     if(button=='a'){
//         cout<<"hello\n";
//     }else if (button=='b')
//     {
//         cout<<"nameste"<<endl;
//     }else if (button=='c')
//     {
//         cout<<"hola\n";
//     }else if(button=='d'){
//         cout<<"hakuna matata"<<endl;
//     }else{
//         cout<<"not valid button!!/n";
//     }
    
//     return 0;
// }
// /*
// this is tenth program
// here we have used else if statement.
// so now lets see how its done by swtich statement...
// */

switch (button)
{

    case 'a':
    cout<<"hello"<<endl;
    break;

    case 'b':
    cout<<"nameste"<<endl;
    break;

    case 'c':
    cout<<"hola"<<endl;
    break;

    case 'd':
    cout<<"hakuna matata"<<endl;
    break;

default:cout<<"not valid button"<<endl;
    break;
}

return 0;
}

//agar hum break use nhi krnge toh uske baad vale sare cout print hojynge.
//tenth program..

/*
the main reason writing return 0; is recommended is:

It explicitly tells the operating system that the program ended successfully.

Even though modern C++ adds it by default, writing it yourself makes your code:
	•	Clearer to read
	•	Standard-compliant (especially in professional or competitive coding)
	•	Helps when programs are run by scripts or other programs that check exit status

It’s about good coding habits and clarity, not just functionality.
*/