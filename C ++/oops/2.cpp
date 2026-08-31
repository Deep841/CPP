#include<iostream>
using namespace std;

class student {
public:
    string name;
    double* cgpaptr;

    // Parameterized constructor
    student(string name, double cgpa) {
        this->name = name;
        cgpaptr = new double(cgpa);
    }

    // Deep copy constructor
    student(const student &obj) {
        this->name = obj.name;
        this->cgpaptr = new double(*(obj.cgpaptr));
    }

    // Display method
    void getinfo() {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaptr << endl;
        cout << "cgpaptr address: " << cgpaptr << endl;
        cout << "-----------------------------" << endl;
    }

    // Destructor to avoid memory leak
    ~student() {
        delete cgpaptr;
    }
};

int main() {
    student s1("rahul kumar", 8.9);
    student s2(s1);  // deep copy

    s1.getinfo();

    *(s2.cgpaptr) = 9.2;  // modify s2

    s1.getinfo(); // s1 should still have 8.9
    s2.getinfo(); // s2 should now have 9.2

    return 0;
}