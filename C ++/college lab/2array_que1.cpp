#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the size of array :";
    cin>>n;

    int arr[n];

    for(int i=0; i<=n; i++){
        cout<<"enter the elts of array one bye one :";
        cin>>arr[n];   
    }

    int maxno= INT_MAX;
    int minno=INT_MIN;

    //now a for loop tp update the maxno and minno from array..
    for( int i=0; i<=n; i++){

        //NOW THERE IS A SHORTCUT FOR THIS..
        //  if(arr[i] < minno){
        //      minno=arr[i];
        //  }

        //  if(arr[i] > maxno){
        //      maxno=arr[i];
        //  }

         maxno=max(maxno,arr[i]);

         minno=min(minno,arr[i]);

    }

    cout<<maxno<<" "<<minno;

    return 0;
}