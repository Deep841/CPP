#include<iostream>
using namespace std;

void coinChangingGreedyAlgo (int d[] , int A){
    int i = 0;
    while(A>0){
        int c = A/d[i];
        cout << "Use " << c << " coins of denomination " << d[i] << endl;
        A -= c*d[i];
        i = i + 1; 
    }
}

int main(){
    int d[] = {10, 5, 1};

    int A;
    cout << "Enter the amount: ";
    cin >> A;

    coinChangingGreedyAlgo(d , A);

}
