#include <iostream>
#include <vector>       // Specific header for vectors
#include <bits/stdc++.h> // Not recommended for production, but included for demonstration
using namespace std;

void explainVector() {
    // Creating empty vector
    vector<int> v;
    
    // Adding elements to vector
    v.push_back(1);     // Traditional way to add elements
    v.emplace_back(2);  // More efficient way to construct elements in-place
    
    // Vector of pairs
    vector<pair<int, int>> vec;
    
    // Adding pairs to vector
    vec.push_back({1, 2});    // Using push_back with pair
    vec.emplace_back(3, 4);   // Using emplace_back (constructs pair in-place)
    
    // Different vector initialization methods
    vector<int> v1(5, 100);   // 5 elements with value 100
    vector<int> v2(5);        // 5 elements initialized to 0
    vector<int> v3(5, 20);    // 5 elements with value 20
    vector<int> v4(v3);       // Copy of v3
    
    // Iterator demonstration
    vector<int>::iterator it = v1.begin(); // Iterator points to first element
    it++;                   // Move iterator to second element
    cout << "Second element: " << *it << endl;
    
    // Display vector contents
    cout << "\nVector v1: ";
    for(auto num : v1) cout << num << " ";
    
    cout << "\nVector vec: ";
    for(auto p : vec) cout << "(" << p.first << "," << p.second << ") ";
}

int main() {
    explainVector();
    return 0;
}