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

int queue[n];
int status[n];
int r=0,f=0,v;


int indegree[n];
int count = 0;
for(int j=0 ; j<n ; j++){
    for(int i=0 ; i<n ; i++){
        if (a[i][j] == 1)
        // indegree[j]++;
        count ++ ;
    }
    indegree[j] = count ;
}

int queue[n];
int f = 0, r = 0;
for(int i=0 ; i<n ;i++){
    if(indegree[i]==0){
        queue[r++]=i;
        indegree[i]=-1;
    }
}
while(f<r){
    v = queue[f++] ; 
    cout<<v<<" ";
    for(int i=0 ; i< n ;i++ ){
        if(a[v][i]==1){
            indegree[i] -- ;
            if(indegree[i]==0){
                queue[r++]==i ;
            }
        }
    }
}
cout<<endl;



// for (int i = 0; i < n; i++) {
//     if (indegree[i] == 0) {
//         queue[r++] = i;
//     }
// }
// cout << "Topological Sort: ";
// while (f < r) {
//     int node = queue[f++];
//     cout << node << " ";

//     for (int j = 0; j < n; j++) {
//         if (a[node][j] == 1) {
//             indegree[j]--;
//             if (indegree[j] == 0) {
//                 queue[r++] = j;
//             }
//         }
//     }
// }

// cout << endl;

// for(int i=0 ; i<n ; i++){
//     status[i] = 1;
// }
// int s;
// cout<<"s : ";
// cin>>s;

// queue[r++]=s;#include<iostream>
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

int queue[n];
int status[n];
int r=0,f=0,v;


int indegree[n];
int count = 0;
for(int j=0 ; j<n ; j++){
    for(int i=0 ; i<n ; i++){
        if (a[i][j] == 1)
        // indegree[j]++;
        count ++ ;
    }
    indegree[j] = count ;
}

int queue[n];
int f = 0, r = 0;
for(int i=0 ; i<n ;i++){
    if(indegree[i]==0){
        queue[r++]=i;
        indegree[i]=-1;
    }
}
while(f<r){
    v = queue[f++] ; 
    cout<<v<<" ";
    for(int i=0 ; i< n ;i++ ){
        if(a[v][i]==1){
            indegree[i] -- ;
            if(indegree[i]==0){
                queue[r++]==i ;
            }
        }
    }
}
cout<<endl;



// for (int i = 0; i < n; i++) {
//     if (indegree[i] == 0) {
//         queue[r++] = i;
//     }
// }
// cout << "Topological Sort: ";
// while (f < r) {
//     int node = queue[f++];
//     cout << node << " ";

//     for (int j = 0; j < n; j++) {
//         if (a[node][j] == 1) {
//             indegree[j]--;
//             if (indegree[j] == 0) {
//                 queue[r++] = j;
//             }
//         }
//     }
// }

// cout << endl;

// for(int i=0 ; i<n ; i++){
//     status[i] = 1;
// }
// int s;
// cout<<"s : ";
// cin>>s;

// queue[r++]=s;
// status[s]=2;
// while(f<r){
//     v = queue[f++];
//     status[v]=3;
//     cout<<v<<" ";

//     for(int i=0;i<n;i++){
//         if(a[v][i]==1 && status[i]==1){
//             queue[r++]=i;
//             status[i]=2;
//         }
//     }
// }
return 0;
}
// status[s]=2;
// while(f<r){
//     v = queue[f++];
//     status[v]=3;
//     cout<<v<<" ";

//     for(int i=0;i<n;i++){
//         if(a[v][i]==1 && status[i]==1){
//             queue[r++]=i;
//             status[i]=2;
//         }
//     }
// }
return 0;
}