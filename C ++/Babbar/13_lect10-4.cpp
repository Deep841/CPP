//problem : Intersection of two arrays - 2 sets ke beech ka intersection elements niklne h
// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1
//update(arr2[j]=-2) : ek element ek ke sath hi map hoga iss liye update kr rhe ....taki same arr2 ke element se arr1 ka elt map na ho 
// #include <bits/stdc++.h> 
#include<vector>
#include<iostream>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;

    for(int i = 0 ; i < n ; i++) {
        int element = arr1[i];

        for(int j = 0 ; j < m ; j++) {
            if(element == arr2[j]) {
                ans.push_back(element);
                arr2[j] = -2;  // Mark as visited
                break;
            }
        }
    }
    return ans;  
}
//ab yeh humare solution ka logic thik hai but time complexity jyda h...mtlb optimised ni h
//(lect10-11) ab optimisation ke liye sorting kr lete hai dono arrays ki taki jyda comparisions na krne pde. 
// #include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i]<arr2[j]){
            i++;
        }
        if(arr2[j]<arr1[i]){
            j++;
        }
    }
    return ans;
}