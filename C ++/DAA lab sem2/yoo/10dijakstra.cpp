//Dijkstra algo
//T(n) = O(n^2)

#include<iostream>
using namespace std;

const int INF = 9999;
const int N = 5;

void dijkstra ( int graph[N][N], int start){
    int dist[N];
    bool visited[N];

    for(int i = 0; i<N ; i++){
        dist[i]  = INF;
        visited[i] = false;
    }

    dist[start]= 0;


    for (int count = 0; count < N - 1; count++) {

        int minDist = INF, u;

        for (int i = 0; i < N; i++) {
            if (!visited[i] && dist[i] <= minDist) {
                minDist = dist[i];
                u = i;
            }
        }

        visited[u] = true;

        for (int v = 0; v < N; v++) {
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }


    for(int i  = 0; i<N ; i++){
       cout<<"Distance to node"<<i<<":"<<dist[i]<<endl;  
    }
}

int main(){
    int graph[N][N] = {
        {0, 10, 3, 0, 0},
        {0, 0, 1, 2, 0},
        {0, 4, 0, 8, 2},
        {0, 0, 0, 0, 7},
        {0, 0, 0, 9, 0}
    };

    int startNode = 0;
    dijkstra(graph, startNode);

    return 0;
}