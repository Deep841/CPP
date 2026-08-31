#include <iostream>
using namespace std;

int Fib(int N) {
    if (N <= 1) {
        return N;
    }
    return Fib(N - 1) + Fib(N - 2);
}

int main() {
    int N;
    cout << "N ?  : ";
    cin >> N;

    cout << "Fibonacci(" << N << ") = " << Fib(N) << endl;
    return 0;
}