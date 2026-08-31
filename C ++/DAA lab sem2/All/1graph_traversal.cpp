#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no. of vertices : ";
    cin>>n;

    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            a[i][j]=0;
        }
    }

    int ed;
    cout<<"no. of edges : ";
    cin>>ed;

    for(int i=0;i<ed;i++){

        int SV;
        cout<<"start vertex : ";
        cin>>SV;

        int EV;
        cout<<"end vertex : ";
        cin>>EV;
        
        a[SV][EV]=1;
    }

    cout<<"adjacency matrix..."<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}