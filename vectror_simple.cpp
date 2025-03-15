#include <iostream>
#include <vector>
#include <algorithm> // For sort()

using namespace std;

int main() {
    // 1. Initialization
    vector<int> numbers;               // Empty vector
    vector<string> names {"Alice", "Bob", "Charlie"}; // Initialized with values
    vector<double> prices(5);          // Vector with 5 default-initialized (0.0) elements
    vector<int> repeated(3, 10);       // Vector with 3 elements all initialized to 10

    // 2. Adding elements
    numbers.push_back(10);            // Add to end
    numbers.push_back(20);
    numbers.emplace_back(30);         // More efficient insertion at end
    numbers.insert(numbers.begin(), 5); // Insert at beginning

    // 3. Accessing elements
    cout << "First element: " << numbers[0] << endl;       // Array-style access
    cout << "Second element: " << numbers.at(1) << endl;   // Bound-checked access
    cout << "Last element: " << numbers.back() << endl;    // Access last element

    // 4. Iterating through elements
    cout << "\nVector elements: ";
    for(int num : numbers) {
        cout << num << " ";
    }

    // Using iterator
    cout << "\nUsing iterators: ";
    for(auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }

    // 5. Vector information
    cout << "\n\nSize: " << numbers.size();
    cout << "\nCapacity: " << numbers.capacity();
    cout << "\nIs empty? " << (numbers.empty() ? "Yes" : "No") << endl;

    // 6. Modifying elements
    numbers[1] = 15;                   // Modify second element
    numbers.pop_back();                 // Remove last element
    numbers.erase(numbers.begin() + 1); // Remove second element

    // 7. Sorting
    vector<int> toSort {5, 2, 9, 1, 5};
    sort(toSort.begin(), toSort.end());

    cout << "\nSorted vector: ";
    for(int num : toSort) {
        cout << num << " ";
    }

    // 8. Clearing vector
    numbers.clear();
    cout << "\n\nAfter clear operation - Size: " << numbers.size() << endl;

    return 0;
}