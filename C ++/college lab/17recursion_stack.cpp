#include <iostream>
using namespace std;

// Recursive function to compute factorial
int factorial(int n) {
    cout << "Entering factorial(" << n << ")" << endl;
    if (n <= 1) {
        cout << "Base case reached: factorial(" << n << ") = 1" << endl;
        return 1; // Base case
    } else {
        int result = n * factorial(n - 1); // Recursive call
        cout << "Returning from factorial(" << n << "): " << result << endl;
        return result;
    }
}

int main() {
    int number;
    
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    int result = factorial(number);
    cout << "Factorial of " << number << " is " << result << endl;

    return 0;
}

// Enter a positive integer: 4
// Entering factorial(4)
// Entering factorial(3)
// Entering factorial(2)
// Entering factorial(1)
// Base case reached: factorial(1) = 1
// Returning from factorial(2): 2
// Returning from factorial(3): 6
// Returning from factorial(4): 24
// Factorial of 4 is 24