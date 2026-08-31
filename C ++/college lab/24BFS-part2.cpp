#include<iostream>
using namespace std;

class graph {
    int V;          //no. of vertices
    int **adjlist;  //a ptr to an array of ptrs, each ptr rep. a vertex's adj list
    int *listsize;  //tracks the no. of neighbours each vertex has.

    public:
    //constructor
    graph(int vertices){
        V=vertices;
        adjlist = new int*[V];  
        listsize = new int[V];  

        for(int i=0 ; i < V ; i++){
            adjlist[i] = new int[V]; //new array allocated for its adj list
            listsize[i] = 0;         //no neighbours initially 
        }
    }

    void addEdge(int u, int v) {    //u&v are edges of vertices 
        adjlist[u][listsize[u]++] = v;  //v as neighbours of u and inc size of adj list of u
        adjlist[v][listsize[v]++] = u;  //u as neighbour of v and inc size of adj list of v
    }

    void BFS(int start) {
        bool *visited = new bool[V];  
        for (int i = 0; i < V; i++) {
            visited[i] = false;         //initialise all vertices as unvisited
        }                               //to keep track of the already visited vertex

        int *queue = new int[V];        //creating a queue
        int front = 0, rear = 0;      

        visited[start] = true;          //vertex visited
        queue[rear++] = start;          //enqueue the start vertex(Adds the vertex to the queue for future processing)

        cout << "BFS Traversal: ";
        while (front < rear) {        
            int node = queue[front++];  //dequeue node (Removes the vertex from the queue and processes it (prints it in this case))
            cout << node << " ";

            for (int i = 0; i < listsize[node]/*reps the no. of neighbours*/; i++) {  //to iterate through all neighbours of curr node.
                int neighbor = adjlist[node][i]/*the ith neighbour of the node*/;    //Retrieves the ith neighbor of the current node from its adjacency list
                if (!visited[neighbor]) {       //Ensures the neighbor has not been visited before
                    visited[neighbor] = true;   //true means the node has already been visited.
                    queue[rear++] /*indicating the queue now has one more elt*/= neighbor;   //Adds the unvisited neighbor to the queue so it can be processed later
                }
            }
        }
        cout << endl;   //next line after printing all visited nodes 

        delete[] visited;   //memory free
        delete[] queue;     
    }

    //destructor (destructors are special member functions that automatically get called when an object goes out of scope or is deleted)
    ~graph() {  
        for (int i = 0; i < V; i++) {
            delete[] adjlist[i];    //deallocate memory for each adj list.
        }
        delete[] adjlist;   //frees the memory for the array of pointers that holds all the adjacency lists
        delete[] listsize;  //memory free
    }
};

int main() {
    graph g(5); //graph with 5 vertices.

    //adding edges between vertices
    g.addEdge(0, 1);    
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    //bfs with source as 0
    g.BFS(0);

    return 0;
}