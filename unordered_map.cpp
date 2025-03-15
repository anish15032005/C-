#include <iostream>
#include <unordered_map>  // Include unordered_map header
using namespace std;

void explainUnorderedMap() {
    // Declare an unordered_map (stores key-value pairs)
    unordered_map<int, string> ump;

    // Inserting elements
    ump[1] = "One";    
    ump[3] = "Three";  
    ump[2] = "Two";    
    ump.emplace(4, "Four"); // More efficient insertion

    // Iterating and printing unordered_map contents
    cout << "Unordered Map Contents:\n";
    for (auto it : ump) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Searching for a key
    if (ump.find(3) != ump.end()) {
        cout << "\nKey 3 exists with value: " << ump[3] << endl;
    }

    // Deleting a key
    ump.erase(2);
    cout << "\nAfter deleting key 2:\n";
    for (auto it : ump) {
        cout << it.first << " -> " << it.second << endl;
    }
}

int main() {
    explainUnorderedMap();
    return 0;
}
