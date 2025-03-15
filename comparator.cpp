#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Comparator to sort pairs by the first element in ascending order,
// and if first elements are the same, sort by second element in descending order.
bool pairCompare(pair<int, int> p1, pair<int, int> p2) {
    if (p1.first == p2.first) 
        return p1.second > p2.second;  // Descending order for second element
    return p1.first < p2.first;  // Ascending order for first element
}

int main() {
    vector<pair<int, int>> v = {{3, 1}, {2, 5}, {3, 6}, {1, 4}, {2, 3}};

    // Sorting using custom comparator
    sort(v.begin(), v.end(), pairCompare);

    cout << "Sorted Pairs: ";
    for (auto p : v) cout << "(" << p.first << "," << p.second << ") ";
    cout << endl;

    return 0;
}
// Output: Sorted Pairs: (1,4) (2,5) (2,3) (3,6) (3,1)
// Explanation: The pairs are sorted first by the first element in ascending order. If the first elements are the same, they are sorted by the second element in descending order. The final sorted pairs are (1,4), (2,5), (2,3), (3,6), (3,1).