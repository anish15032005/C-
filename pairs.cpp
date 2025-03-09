#include <iostream>
#include <bits/stdc++.h> // Includes all standard libraries (not recommended for production)
using namespace std;

// Function to demonstrate pairs in C++
void explainPairs() {
    // Basic pair of integers
    pair<int, int> p1 = {1, 3};
    cout << "Basic pair: ";
    cout << p1.first << " " << p1.second << endl;

    // Nested pair (pair containing another pair)
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << "Nested pair: ";
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << "Second element of second pair in array: ";
    cout << arr[1].second << endl;
}

int main() {
    // Call the function to demonstrate pairs
    explainPairs();
    return 0;
}