#include <iostream>
#include <map>  // Include map header
using namespace std;

void explainMap() {
    // Declare a map (stores key-value pairs)
    map<int, string> mp;

    // Inserting values into the map
    mp[1] = "One";    // Using subscript operator
    mp[3] = "Three";
    mp[2] = "Two";
    mp.emplace(4, "Four"); // More efficient insertion

    // Iterating and printing map contents
    cout << "Map Contents:\n";
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Checking if a key exists
    if (mp.find(3) != mp.end()) {
        cout << "\nKey 3 exists with value: " << mp[3] << endl;
    }

    // Deleting a key
    mp.erase(2);
    cout << "\nAfter deleting key 2:\n";
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Finding lower bound and upper bound
    cout << "\nLower bound of 3: " << mp.lower_bound(3)->first << endl;
    cout << "Upper bound of 3: " << mp.upper_bound(3)->first << endl;
}

int main() {
    explainMap();
    return 0;
}
// Output:
// Map Contents:
// 1 -> One
// 2 -> Two
// 3 -> Three
// 4 -> Four
