#include <iostream>
#include <vector>
#include <algorithm>  // For STL algorithms
#include <numeric>    // For iota()
using namespace std;

void explainExtra() {
    vector<int> v = {5, 3, 8, 6, 2, 9, 1};

    // 1️⃣ Partial Sort: Sorts only first 3 elements
    partial_sort(v.begin(), v.begin() + 3, v.end());
    cout << "Partial Sort (First 3 elements sorted): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // 2️⃣ nth_element: Finds 4th smallest element but doesn’t sort completely
    nth_element(v.begin(), v.begin() + 3, v.end());
    cout << "nth_element (4th smallest at index 3): " << v[3] << endl;

    // 3️⃣ iota: Fill the vector with consecutive numbers
    iota(v.begin(), v.end(), 1);
    cout << "After iota (Filled with consecutive numbers): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // 4️⃣ next_permutation: Get next lexicographical order
    next_permutation(v.begin(), v.end());
    cout << "Next Permutation: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // 5️⃣ prev_permutation: Get previous lexicographical order
    prev_permutation(v.begin(), v.end());
    cout << "Previous Permutation: ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // 6️⃣ rotate: Rotate the vector left by 2 positions
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "Rotated (left by 2 positions): ";
    for (int num : v) cout << num << " ";
    cout << endl;

    // 7️⃣ adjacent_difference: Compute the difference between adjacent elements
    vector<int> diff(v.size());
    adjacent_difference(v.begin(), v.end(), diff.begin());
    cout << "Adjacent Difference: ";
    for (int num : diff) cout << num << " ";
    cout << endl;
}

int main() {
    explainExtra();
    return 0;
}
