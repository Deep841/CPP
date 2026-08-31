//Read Two Values and Display Larger
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(a > b)
        cout << "Larger value is: " << a << endl;
    else
        cout << "Larger value is: " << b << endl;
    return 0;
}
