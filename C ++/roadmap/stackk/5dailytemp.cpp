/*
Daily temperatures : 
- https://leetcode.com/problems/daily-temperatures/description/
- 
*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> dailyTemp(vector<int> &temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
            int prevIndex = s.top();
            s.pop();
            ans[prevIndex] = i - prevIndex;
        }
        s.push(i);
    }
    return ans;
}

int main() {
    vector<int> temps = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result = dailyTemp(temps);

    cout << "Output: ";
    for (int day : result) {
        cout << day << " ";
    }
    cout << endl;

    return 0;
}