#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    // 1. Initialize lists
    list<int> list1 = {2, 1, 4};
    list<int> list2 = {5, 3};
    list<int> list3 = {3, 7, 5};

    // 2. Special list operations
    cout << "Initial lists:\n";
    cout << "List1: "; for(int n : list1) cout << n << " ";  // 2 1 4
    cout << "\nList2: "; for(int n : list2) cout << n << " ";  // 5 3
    cout << "\nList3: "; for(int n : list3) cout << n << " ";  // 3 7 5

    // a) Add elements at both ends
    list1.push_front(0);        // Add to front
    list1.emplace_back(6);      // Efficient add to end

    cout << "\n\nAfter push_front/emplace_back:\n";
    cout << "List1: "; for(int n : list1) cout << n << " ";  // 0 2 1 4 6

    // b) Splice: Transfer elements from list2 to list1
    auto it = next(list1.begin(), 2);  // Iterator to 3rd position
    list1.splice(it, list2);           // Move all elements from list2

    cout << "\n\nAfter splicing list2 into list1 at position 2:\n";
    cout << "List1: "; for(int n : list1) cout << n << " ";  // 0 2 5 3 1 4 6
    cout << "\nList2 (now empty): "; for(int n : list2) cout << n << " ";

    // c) Sort the list
    list1.sort();
    cout << "\n\nAfter sorting list1:\n";
    cout << "List1: "; for(int n : list1) cout << n << " ";  // 0 1 2 3 4 5 6

    // d) Merge sorted lists (list3 must be sorted first)
    list3.sort();  // 3 5 7
    list1.merge(list3);

    cout << "\n\nAfter merging sorted list3 into list1:\n";
    cout << "List1: "; for(int n : list1) cout << n << " ";  // 0 1 2 3 3 4 5 5 6 7
    cout << "\nList3 (now empty): "; for(int n : list3) cout << n << " ";

    // e) Remove duplicates (consecutive only)
    list1.unique();
    cout << "\n\nAfter removing consecutive duplicates:\n";
    cout << "List1: "; for(int n : list1) cout << n << " ";  // 0 1 2 3 4 5 6 7

    // f) Remove specific value
    list1.remove(3);
    cout << "\n\nAfter removing all 3s:\n";
    cout << "List1: "; for(int n : list1) cout << n << " ";  // 0 1 2 4 5 6 7

    return 0;
}