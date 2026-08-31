/*
Min stack : 
- https://leetcode.com/problems/min-stack/description/
*/

#include<iostream>
#include<stack>
using namespace std;

class minstack{
    private : 
    stack<int> s;
    stack<int> mins;

    public : 
    minstack(){
        //constructor 
    }

    void push(int val){
        s.push(val);
        if(mins.empty() || val<=mins.top())
            mins.push(val);
    }

    void pop(){
        if(s.top()==mins.top()){
            mins.pop();
        }
        s.pop();
    }

    int top(){
        mins.top();
    }
};