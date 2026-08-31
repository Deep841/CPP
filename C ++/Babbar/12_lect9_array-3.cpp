//here we will see that how the values changed in the main function when we called another function(update function)
//humne 3 memory block function ko nhi diye hai (from main to update function) else what we did was ...
//we have given the location of first memory block ("arr", also the name of the array) to the uodate function.
//ab voh phla address store hogya update function.

//variable ke case m variable copy ho jata tha update vale function m
//aur array vle case m address dete hai update function ko tabhi values change ho jati h
#include<iostream>
using namespace std;
void update(int arr[], int size){
    arr[0]=120;
    //print array
}
int main(){
    int arr[3]={1,2,3};
    //print array or 
    cout<<arr[0]<<endl;
    update(arr,3);
    cout<<arr[0]<<endl;
    //firse print array vli lines
    //observation : array changed from {1,2,3} to {120,2,3}
}