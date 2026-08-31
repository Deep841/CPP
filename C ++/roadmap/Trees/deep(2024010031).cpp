// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
using namespace std;
#include <sys/resource.h>
using namespace std;

int student_code() {
    // 👇 Write your code here bellow this line
    //approach : i will use hash map to store the sum of all possible comabinations
    
    int n;
    cout<<"enter size of nums : \n";
    cin>>n;

    int nums[n];   
    cout<<"enter input nums : \n";
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }

    int divi = n/3;

    int xora[divi], xorb[divi], xorc[divi];
    for(int i1 = 0 ; i1 < divi ; i1++){
        xora[i1] = nums[i1];
    }

    for(int i2 = divi; i2 < 2*divi ; i2++){
        xorb[i2] = nums[i2];
    }

    for(int i3 = 2*divi; i3<3*divi ; i3++){
        xorc[i3] = nums[i3];
    }

    int maxi = 0 ; 

    for (int i = 0 ; i < n ; i ++){
        maxi += nums[i];
    }


    // 👆 Write your code here above this line
    
    return maxi; //use return statement to return a value
}

int main() {
    struct rusage usage;
    auto start = chrono::high_resolution_clock::now();

    student_code();

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    getrusage(RUSAGE_SELF, &usage);

    cout << "Execution Time: " << elapsed.count() << " seconds\n";
    cout << "Memory Usage: " << usage.ru_maxrss << " KB\n";
    return 0;
}
