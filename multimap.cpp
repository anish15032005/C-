#include <iostream>
#include <map>  // Include multimap header
using namespace std;

void explainMultimap() {
    // Declaring a multimap
    multimap<int, string> mm;

    // Inserting multiple values for the same key
    mm.insert({1, "Apple"});
    mm.insert({1, "Apricot"});
    mm.insert({2, "Banana"});
    mm.insert({2, "Blueberry"});
    mm.insert({3, "Cherry"});

    // Displaying multimap contents
    cout << "Multimap Contents:\n";
    for (auto it : mm) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Finding elements with a specific key
    cout << "\nValues for key 1:\n";
    auto range = mm.equal_range(1);  // Get range of elements with key 1
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Erasing all elements with a specific key
    mm.erase(2);
    cout << "\nAfter deleting key 2:\n";
    for (auto it : mm) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    explainMultimap();
    return 0;
}
