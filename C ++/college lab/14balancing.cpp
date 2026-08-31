#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if the parentheses are balanced
bool areParenthesesBalanced(const string &expr) {
    stack<char> s; // Stack to store opening parentheses

    for (char ch : expr) {
        switch (ch) {
            case '(':
            case '{':
            case '[':
                s.push(ch); // Push opening parentheses onto the stack
                break;

            case ')':
                if (s.empty() || s.top() != '(') {
                    return false; // Unmatched closing parenthesis
                }
                s.pop(); // Pop matching opening parenthesis
                break;

            case '}':
                if (s.empty() || s.top() != '{') {
                    return false; // Unmatched closing parenthesis
                }
                s.pop(); // Pop matching opening parenthesis
                break;

            case ']':
                if (s.empty() || s.top() != '[') {
                    return false; // Unmatched closing parenthesis
                }
                s.pop(); // Pop matching opening parenthesis
                break;
        }
    }

    return s.empty(); // If stack is empty, parentheses are balanced
}

int main() {
    string expression;
    
    cout << "Enter an expression with parentheses: ";
    getline(cin, expression);

    if (areParenthesesBalanced(expression)) {
        cout << "Parentheses are balanced." << endl;
    } else {
        cout << "Parentheses are not balanced." << endl;
    }

    return 0;
}

// Enter an expression with parentheses: {[(a + b) * (c / d)] - e}
// Parentheses are balanced.

// Enter an expression with parentheses: {(a + b) * (c / d)] - e}
// Parentheses are not balanced.
