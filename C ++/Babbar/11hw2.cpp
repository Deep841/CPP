#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a base 10 integer: ";
    cin >> n;

    int mask = 0;
    int temp = n;

    // Create a mask with all bits set to 1 up to the highest bit of n
    while (temp != 0) {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }

    // XOR n with mask to get the complement
    int complement = n ^ mask;
    cout << "Complement: " << complement << endl;

    return 0;
}