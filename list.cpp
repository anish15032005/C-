#include <iostream>
#include <list>
#include <algorithm> // For sort()

using namespace std;

int main() {
    // 1. Initialization
    list<int> numbers;               // Empty list
    list<string> names {"Alice", "Bob", "Charlie"}; // Initialized with values
    list<double> prices(5, 0.0);     // List with 5 elements initialized to 0.0
    list<int> repeated(3, 10);       // List with 3 elements all initialized to 10

    // 2. Adding elements
    numbers.push_back(30);           // Add to end
    numbers.push_front(5);           // Add to beginning (unique to lists)
    numbers.emplace_back(40);        // Efficient insertion at end
    numbers.emplace_front(0);        // Efficient insertion at beginning
    auto it = next(numbers.begin(), 2); // Get iterator to 3rd position
    numbers.insert(it, 15);          // Insert at specific position

    // 3. Accessing elements
    cout << "First element: " << numbers.front() << endl; // Access first element
    cout << "Last element: " << numbers.back() << endl;   // Access last element

    // 4. Iterating through elements
    cout << "\nList elements: ";
    for(int num : numbers) {
        cout << num << " ";
    }

    // Using iterator
    cout << "\nUsing iterators: ";
    for(auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }

    // 5. List information
    cout << "\n\nSize: " << numbers.size();
    cout << "\nIs empty? " << (numbers.empty() ? "Yes" : "No") << endl;

    // 6. Modifying elements (no random access)
    numbers.pop_front();              // Remove first element
    numbers.pop_back();               // Remove last element
    numbers.remove(15);               // Remove all occurrences of 15 (unique to lists)

    // 7. Special list operations
    list<int> otherList {100, 200, 300};
    numbers.splice(numbers.end(), otherList); // Move elements from other list

    numbers.unique();                 // Remove consecutive duplicates
    numbers.sort();                   // Sort elements (uses list's own sort)

    cout << "\nModified list: ";
    for(int num : numbers) {
        cout << num << " ";
    }

    // 8. Clearing list
    numbers.clear();
    cout << "\n\nAfter clear operation - Size: " << numbers.size() << endl;

    return 0;
}