//Strucutre for students data with functions, loops for 3 entries
#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
    void setStudentData() {
        cout << "Enter name, roll, marks: ";
        cin >> name >> roll >> marks;
    }
    void getStudentData() {
        cout << name << " " << roll << " " << marks << endl;
    }
};

int main() {
    Student s;
    for(int i=0; i<3; i++)
        s[i].setStudentData();
    cout << "Student Info:\n";
    for(int i=0; i<3; i++)
        s[i].getStudentData();
    return 0;
}
