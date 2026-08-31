#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int num = a; num < b; num++) {
        if (num < 2) continue; // skip numbers less than 2
        int i;
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                break;
            }
        }
        if(i == num) {
            cout << num << " ";
        }
    }
    cout<<endl;
    return 0;
}
//third example of ninth program..
//here we are printing all the numbers b/w a&b...