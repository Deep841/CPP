/*
Valid Parentheses : 
- https://leetcode.com/problems/valid-parentheses/description/
- issme order bhi hona chahiye ( [) ] this is not valid    and ( [] ) this is valid
*/

#include<iostream>
#include<stack>
using namespace std;

bool validParanthesis(string s){
    stack <char> stackk;
    for(char ch : s){
        if(ch=='('||ch=='['||ch=='{')
            stackk.push(ch);
        else{
            if(stackk.empty())
                return false;
        char top = stackk.top();
        if (ch==')' && top!='(' || ch==']' && top!='[' || ch=='}' && top!='{')
            return false;
        stackk.pop();
        }
    }
    return stackk.empty();
}