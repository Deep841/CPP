#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to get precedence of operators
int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

// Function to convert infix expression to postfix expression
string infixToPostfix(const string &infix) {
    stack<char> s; // Stack to hold operators and parentheses
    string postfix; // Resultant postfix expression

    for (char ch : infix) {
        if (ch == ' ') {
            continue; // Skip spaces
        }

        if (isalnum(ch)) {
            postfix += ch; // Add operand (variable or number) to postfix
        } else if (ch == '(') {
            s.push(ch); // Push '(' onto stack
        } else if (ch == ')') {
            // Pop from stack to postfix until '(' is encountered
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Pop '(' from stack
        } else {
            // Operator
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch); // Push current operator onto stack
        }
    }

    // Pop all remaining operators in stack
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;

    cout << "Enter infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}

// Enter infix expression: A + B * C - D
// Postfix expression: ABC*+D-