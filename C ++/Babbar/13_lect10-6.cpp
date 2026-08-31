//problem : triplet sum (arr[i]+arr[j]+arr[k]==s)
//sir explained this question n now it is HW 
//abhi brute force approach use kr rhe hai bus logic build krne ke liye abhi question complexities ka ni h
//  
// #include <bits/stdc++.h>
#include<vector>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;

    set<vector<int>> st;

    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            for (int k = j + 1 ; k < n ; k++) {
                if (arr[i] + arr[j] + arr[k] == K) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end()); 
                    st.insert(temp);
                }
            }
        }
    }

    for (auto triplet : st) {
        ans.push_back(triplet);
    }

    return ans;
}
// now the above code is of time complexity O(n^3)
// now trying to do it with O(n^2)

