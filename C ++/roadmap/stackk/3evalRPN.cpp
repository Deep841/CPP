/*
Evaluate Reverse Polish Notation : 
- https://leetcode.com/problems/evaluate-reverse-polish-notation/
- Approach:
Use a stack:
	•	If the token is a number → push to stack.
	•	If it’s an operator (+, -, *, /) → pop two numbers, apply the operator, push result back.
    
- NOTE : stoi stands for “string to integer”. It converts a string (e.g., "42", "-15") into its equivalent integer value.
*/
