#include<iostream>
using namespace std;

class Transaction;

class Account {
private:
    string name;
    long accountNumber;
    float balance;

    friend bool processTransaction(Account &A1, Account &A2, Transaction &T1);
};

class Transaction {
private:
    long fromAcc;
    long toAcc;
    float amount;
    string type;

    friend bool processTransaction(Account &A1, Account &A2, Transaction &T1);
};

bool processTransaction(Account &A1, Account &A2, Transaction &T1) {
    if (T1.type == "deposit") {
        A1.balance += T1.amount;
    }
    else if (T1.type == "withdraw") {
        if (A1.balance >= T1.amount) {
            A1.balance -= T1.amount;
        } else {
            cout << "insufficient balance" << endl;
            return false;
        }
    }
    else if (T1.type == "transfer") {
        if (A1.balance >= T1.amount) {
            A1.balance -= T1.amount;
            A2.balance += T1.amount;
        } else {
            cout << "insufficient balance" << endl;
            return false;
        }
    }
    return true;
}

int main() {
    Account A1, A2;

    A1.name = "ram"; 
    A2.name = "sham";

    A1.accountNumber = 123456789;
    A2.accountNumber = 987654321;

    A1.balance = 5000;
    A2.balance = 2000;

    Transaction T1;
    T1.amount = 3000;
    T1.type = "deposit";

    processTransaction(A1, A2, T1);

    cout << A1.balance << endl;
    cout << A2.balance << endl;

    return 0;
}