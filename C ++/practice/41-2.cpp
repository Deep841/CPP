#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    int n = 2;
    while (n <= number) {
        int div = 2;
        bool isPrime = true;  // Assume n is prime


// #include <cmath>  Include cmath for sqrt()
// for (int div = 2; div <= sqrt(n); div++) {  Check only up to √n

        while (div * div <= n) {  // Check only till √n
            if (n % div == 0) {
                isPrime = false;
                break;  // Exit early if n is not prime
            }
            div++;
        }

        if (isPrime) {
            cout << n << " is prime" << endl;
        }

        n++; // Move to the next number
    }
}