#include <iostream>
#include <stack>
#include <sstream> // For stringstream
#include <cctype> // For isdigit()
using namespace std;

// Function to evaluate a postfix expression
int evaluatePostfix(const string &postfix) {
    stack<int> s; // Stack to hold operands

    stringstream ss(postfix);
    string token;

    while (ss >> token) {
        if (isdigit(token[0])) {
            s.push(stoi(token)); // Convert number to integer and push onto stack
        } else {
            // Operator: Pop two operands, apply the operator, and push the result
            int right = s.top(); s.pop();
            int left = s.top(); s.pop();
            int result;

            switch (token[0]) {
                case '+': result = left + right; break;
                case '-': result = left - right; break;
                case '*': result = left * right; break;
                case '/': result = left / right; break;
                default: throw invalid_argument("Invalid operator");
            }

            s.push(result); // Push result back onto stack
        }
    }

    return s.top(); // The result is the only element left in the stack
}

int main() {
    string postfix;

    cout << "Enter postfix expression (with spaces between tokens): ";
    getline(cin, postfix);

    try {
        int result = evaluatePostfix(postfix);
        cout << "The result of the postfix expression is: " << result << endl;
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}


// Enter postfix expression (with spaces between tokens): 3 4 + 2 * 7 /
// The result of the postfix expression is: 2