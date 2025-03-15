#include <iostream>
#include <queue>  // Required header

using namespace std;

int main() {
    // Default: Max-heap (highest value first)
    priority_queue<int> pq;

    // Insert elements
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // Access top element
    cout << "Top element: " << pq.top() << endl; // Output: 50

    // Remove top element
    pq.pop();
    cout << "Top after pop: " << pq.top() << endl; // Output: 30

    // Min-heap (lowest value first)
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(50);
    cout << "\nMin-heap top: " << min_pq.top(); // Output: 10

    return 0;
}