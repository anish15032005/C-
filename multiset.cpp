#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    // Insert elements (allow duplicates)
    ms.insert(10);
    ms.insert(5);
    ms.insert(20);
    ms.insert(5); // Duplicate allowed

    // Iterate (sorted order)
    cout << "Multiset elements: ";
    for (int num : ms) {
        cout << num << " "; // Output: 5 5 10 20
    }

    // Count duplicates
    cout << "\nCount of 5: " << ms.count(5); // Output: 2

    // Partial deletion (erase one instance)
    auto it = ms.find(5);
    if (it != ms.end()) {
        ms.erase(it); // Removes first occurrence of 5
    }

    cout << "\nAfter erasing one 5: ";
    for (int num : ms) {
        cout << num << " "; // Output: 5 10 20
    }

    return 0;
}