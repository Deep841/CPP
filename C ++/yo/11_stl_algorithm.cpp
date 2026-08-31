#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> toadd = {1, 2, 3, 4, 5};
    for (int i : toadd)
    {
        v.push_back(i);
    }
    cout << "Elements in vector: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << binary_search(v.begin(), v.end(), 3) << endl; // Check if 3 is in the vector
    cout << binary_search(v.begin(), v.end(), 6) << endl; // Check

    cout << "lower_bound: " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl; // Find the first position where 4 could be inserted
    cout << "upper_bound: " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl; // Find the first position where 5 could be inserted

    int a = 3;
    int b = 4;
    cout << "max: " << max(a, b) << endl;                                               // Find the maximum of a and b
    cout << "min: " << min(a, b) << endl;                                               // Find the
    swap(a, b);                                                                         // Swap the values of a and b
    cout << "After swap, a: " << a << ", b: " << b << endl;                             // Output the values after swapping
    
    string s1 = "Hello";
    string s2 = "World";    
    reverse(s1.begin(), s1.end()); // Reverse the string s1
    cout << "Reversed string s1: " << s1 << endl; // Output the reversed string

    rotate(v.begin(), v.begin() + 2, v.end()); // Rotate the vector by 2 positions
    cout << "Elements in vector after rotation: ";
    for (int i : v) 
    {
        cout << i << " ";

    }
    sort(v.begin(), v.end()); // Sort the vector
    // working with sort function-based on interosort i.e
    // it uses quicksort, heapsort, and insertion sort 
    // depending on the size of the vector and the characteristics of the data.

    cout << "\nSorted elements in vector: ";    
    for (int i : v) 
    {
        cout << i << " ";
    }
}
