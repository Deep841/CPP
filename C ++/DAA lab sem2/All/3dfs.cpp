#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "No. of vertices: ";
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {  
            a[i][j] = 0;
        }
    }

    int ed;
    cout << "No. of edges: ";
    cin >> ed;

    for (int i = 0; i < ed; i++) {
        int SV, EV;
        cout << "Start vertex: ";
        cin >> SV;
        cout << "End vertex: ";
        cin >> EV;

        a[SV][EV] = 1;  
    }

    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

int stack[n];
int status[n];
int top=0,v;

for(int i=0 ; i<n ; i++){
    status[i] = 1;
}
int s;
cout<<"s : ";
cin>>s;

stack[top++]=s;
status[s]=2;
while(top>=0){
    v = status[top--];
    status[v]=3;
    cout<<v<<" ";

    for(int i=0;i<n;i++){
        if(a[v][i]==1 && status[i]==1){
            status[top++]=i;
            status[i]=2;
        }
    }
}
return 0;
}