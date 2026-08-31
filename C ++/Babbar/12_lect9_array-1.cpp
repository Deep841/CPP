//Lect-9 : Arrays : a DS with similar types of data/items, memory = contiguous, indexing starts at 0 .
//why : 10000variables
//declaration int dost[10]; and this array named dost, here dost also reps the first location of array
//dost[0] rep first loaction of array
//Declaration, acces : agar 20th index access krna hai toh atleast 21 size ka array bna na pdega, initialisation , 

//initalise entire array with same value
#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[], int size){
    cout<<"Printing the Array..."<<endl;
    for(int i=0 ; i<size ; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"printing done"<<endl;
    cout<<endl;//just for clear undersatnding in terminal
}
int main(){
    //1
    int value = 5;
    //method - 1 :
    // int n = 10;
    // vector<int> arr(n,value);
    // for(int x : arr){
    //     cout<<x<<" ";
    // }

    //method - 2 :
    // int arr[10];
    // for(int i=0;i<10;i++){
    //     arr[i]=value;
    // }

    int first[]={5,7,11};
    printArray(first,3);
    int second[10];
    printArray(second,10);

    //2
    //Now Arrays with function
    //now size of array ...
    int size_of_first = sizeof(first)/sizeof(int);
    cout<<"size of first is : "<<size_of_first<<endl;
    //now this approach is wrong as eg below:

    int third[10]={2,7};
    int size_of_third = sizeof(third)/sizeof(int);
    cout<<"size of third is : "<<size_of_third<<endl;//now the O/P came is 10 but humare array m 2 hi elements hi daale hai humne ...so this method isn't worth it
    //now this is the only reason ki jab bhi array print krva rhe hai toh sath m parameter uske size bhi daal rhe h.
    
}