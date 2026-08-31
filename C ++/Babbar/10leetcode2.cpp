#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    while (n != 0) {
        if (n & 1) {  // Check if the least significant bit is 1
            count++;
        }
        n = n >> 1;  // Right shift n by 1 to check the next bit
    }

    cout << "The number of 1s in the binary representation is: " << count << endl;

    return 0;
}