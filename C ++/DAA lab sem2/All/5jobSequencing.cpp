#include<iostream>
using namespace std;

struct job
{
int jno;
int profit;
int d;

job() {}

//constructor 
job(int j, int p, int deadline){
    jno = j;
    profit = p;
    d = deadline;
}
};

int main(){
    int n,i;

    cout<<"enter the number of jobs : ";
    cin>>n;

    job jobs[n];

    for(int i=0;i<n;i++){
        int jno,profit,d;
        cout<<"enter job number , profit ,deadline for the job  "<<i+1<<" : ";
        cin>>jno>>profit>>d;
        jobs[i] = job(jno,profit,d);
    }
    
    //without terminal
    // job j1(1,2,3);

    int sol[n];
    for(int i = 0 ; i < n ; i++){
        sol[i]=-1;
    }

    int Tprofit = 0,dl;
    
    for(int i=0; i<n ; i++){
        dl = jobs[i].d;
        cout<<dl<<endl;
        for(int j =dl - 1 ; j>=0 ; j--){
            if(sol[j]==-1){
                sol[j]=i;
                break;
            }
        }
    }

    for(int i =0 ; i < n ; i++){
        if(sol[i]!=-1){
            cout<<sol[i]<<" ";
        }
    }
}
//now this for 17th feb 2025 lab work todo:
//coin changing by greedy algo
//DP : fibonacci series , coin changing dp.