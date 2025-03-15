#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(5); // Ignored

    // Iterate (sorted order)
    cout << "Set elements: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " "; // Output: 5 10 20
    }

    // Check existence
    cout << "\nIs 10 present? " << (s.count(10) ? "Yes" : "No"); // Yes

    // Delete element
    s.erase(10);
    cout << "\nAfter deletion: ";
    for (int num : s) {
        cout << num << " "; // Output: 5 20
    }

    return 0;
}