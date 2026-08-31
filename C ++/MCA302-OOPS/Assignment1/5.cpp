//Use Namespace to Show Same Name Variable/Function
#include <iostream>
using namespace std;

namespace First {
    void show() { cout << "From First\n"; }
    int value = 1;
}
namespace Second {
    void show() { cout << "From Second\n"; }
    int value = 2;
}

int main() {
    First::show();
    cout << First::value << endl;
    Second::show();
    cout << Second::value << endl;
    return 0;
}
