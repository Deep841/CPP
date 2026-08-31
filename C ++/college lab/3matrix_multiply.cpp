#include<iostream>
using namespace std;

int main(){
    int r1, r2, c1, c2;

    cout<<"phli matrix ki rows kitti h? : ";
    cin>>r1;
    cout<<"aur phli vli ke coloumns? :";
    cin>>c1;

    cout<<"dusri vli matrix ke rows? : ";
    cin>>r2;
    cout<<"aur dusri vli ke columns? : ";
    cin>>c2;

    if(c1 != r2){
        cout<<"matrix ki dimensions glt hai bhai!";
        return 333;
    }
    
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    cout<<"btao bhai elts kya hai matrix ke a11,a12,a13,..iss from m.. : ";
    for(int i=0; i<r1; i++ ){
        for(int j=0; j<c1; j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"ab second matrix ke elts btao : ";
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>mat2[i][j];
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            result[i][j]=0;
        }
    }

    
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            for(int k=0; k<c1; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}