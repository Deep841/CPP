//complex class
#include<iostream>
using namespace std;

class compleXx{
    private : 
    float real;
    float imginary;

    public : 
    // compleXx(float real, float imaginary){
    //     this->real = real;
    //     this->imginary = imaginary;
    // }
    void setcompleXx(float real, float imaginary){
        this->real = real;
        this->imginary = imaginary;
    }

    //member function to display complex number
    void displaycompleXx(){
        cout<<"real : "<<real<<endl;
        cout<<"imaginary : "<<imginary<<endl;
    }

    
};