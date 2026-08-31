//N-Queen
//T(n) = O(n!)

#include<iostream>
#include<cmath>
using namespace std; 

void printArray(int result[] , int size){
    for(int i = 0 ; i < size ; i++){
        for(int j=0 ; j < size ; j++){
            if( result[i] == j){
                cout<<"Q ";
            }
            else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
    cout<< endl;
}

int isSafe(int result[] , int x2 , int y2){
    for(int i = 0 ; i<x2 ; i++){
        if((result[i] == y2) || (abs(i-x2) == abs(result[i]- y2)))
        return 0 ;
    }
    return 1 ;
}

void placeQueens(int result[] , int x , int size){
    for(int i = 0; i<size ; i++){
        if (isSafe(result,x,i)){
            result[x] = i ;
            if(x == size - 1){
                cout<<"\nSolution found.\n";
                printArray(result, size );
            }
            else {
                placeQueens(result , x+1 , size);
            }
        }
    }
}

int main(){
    int size ; 
    cout<<"size : ";
    cin>>size ; 

    int result[size] ; 
    placeQueens(result , 0 , size);

    return 0 ;
}