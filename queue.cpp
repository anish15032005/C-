#include <iostream>
#include <queue>  // Required header

using namespace std;

int main() {
    queue<int> q;

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);
    q.emplace(40);  // Same as push() for primitive types

    // Access elements
    cout << "Front element: " << q.front() << endl;  // 10
    cout << "Rear element: " << q.back() << endl;    // 40

    // Dequeue elements
    q.pop();
    cout << "Front after pop: " << q.front() << endl; // 20

    // Size and emptiness
    cout << "Size: " << q.size() << endl;           // 3
    cout << "Is empty? " << boolalpha << q.empty() << endl; // false

    // Display all elements (not typical for queues!)
    cout << "Elements (FIFO order): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    } // Output: 20 30 40
    cout << endl;

    return 0;
}