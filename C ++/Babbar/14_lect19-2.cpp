//STL - Conatiner - Container Adaptors : Stack, Queue, Prioriy Queue
/*
Stack : last in first out (LIFO), eg-shadi ki plates 
      : push n pop 
      : #include<stack>
*/
#include<iostream>
#include<stack>
using namespace std;
#include<queue>
#include<vector>
#include<set>

int main(){
    cout<<"string..."<<endl;

    stack<string> s;

    s.push("yo1");
    s.push("yo2");
    s.push("yo3");

    cout<<"elts : ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

    s.push("yo4");
    cout<<"top element : "<<s.top()<<endl;
    cout<<"size of stack : "<<s.size()<<endl;
    cout<<"empty or not : "<<s.empty()<<endl;

/*
Queue : first in first out (FIFO)
      : #include<queue>
*/

cout<<endl;
cout<<"queue..."<<endl;

queue<string> q;

vector<string> q_ke_liye = {"meow1", "meow2", "meow3", "meow4", "meow5"};
for(string i : q_ke_liye){
    q.push(i);
}

while(!q.empty()){
    cout<<q.back()<<" ";
    q.pop();
}cout<<endl;

q.push("mine");
cout<<"front : "<<q.front()<<endl;
cout<<"size : "<<q.size()<<endl<<endl;

/*
Priority queue : elts r stored in sorted order
               : by default, it behaves like a max-heap, i.e., the largest element is always at the top.
               : #include<queue>
*/

    cout<<"priority queue..."<<endl;
    //max-heap
    priority_queue<int> maxi;

    //min-heap
    priority_queue<int , vector<int> ,greater<int>> mini;

    maxi.push(1);
    //or
    vector<int> maxi_ke_liye = {10, 20, 5, 15};

    for (int val : maxi_ke_liye) {
        maxi.push(val);
    }

    cout<<"maxi size : "<<maxi.size()<<endl;

    int n = maxi.size();
    cout<<"maxi elts : ";
    for(int i = 0 ; i<n ; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    //same thing for mini

    mini.push(1);
    //or
    for (int val : maxi_ke_liye) {
        mini.push(val);
    }    cout<<"mini size : "<<mini.size()<<endl;

    int n2 = mini.size();
    cout<<"mini elts : ";
    for(int i = 0 ; i<n2 ; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl<<endl;

    
}