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

// Function to compute the result
int maxXorAnd(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;

    // Try all partitions into A, B, C using bitmasks
    // Each element can go to A (0), B (1), or C (2)
    int total = pow(3, n);
    for (int mask = 0; mask < total; mask++) {
        int temp = mask;
        int xorA = 0, andB = -1, xorC = 0;

        for (int i = 0; i < n; i++) {
            int choice = temp % 3;
            temp /= 3;

            if (choice == 0) xorA ^= nums[i];
            else if (choice == 1) {
                if (andB == -1) andB = nums[i];
                else andB &= nums[i];
            }
            else xorC ^= nums[i];
        }

        if (andB == -1) andB = 0;
        ans = max(ans, xorA + andB + xorC);
    }

    return ans;
}

// Main function
int main() {
    vector<int> nums1 = {2, 3};
    cout << maxXorAnd(nums1) << endl; // Output: 5

    vector<int> nums2 = {1, 3, 2};
    cout << maxXorAnd(nums2) << endl; // Output: 6

    vector<int> nums3 = {1, 2, 3, 7};
    cout << maxXorAnd(nums3) << endl; // Output: 15

    return 0;
}



    // 👆 Write your code here above this line
    
    return 0; //use return statement to return a value
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
