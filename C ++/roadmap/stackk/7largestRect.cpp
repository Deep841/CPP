/*
84. Largest Rectangle in Histogram : 
- https://leetcode.com/problems/largest-rectangle-in-histogram/description/
- 21, 22
- O(n) time
- O(n)  space
- Intuition:
	•	For each bar, we try to extend the rectangle left and right as far as the height allows.
	•	The stack helps us find the previous smaller and next smaller bars efficiently.
*/
