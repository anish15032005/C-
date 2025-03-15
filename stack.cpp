#include <iostream>
#include <stack>  // Required header

using namespace std;

int main() {
    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Access top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    // Pop element
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // Output: 20

    // Check size and emptiness
    cout << "Size: " << s.size() << endl;       // Output: 2
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: No

    // Display all elements (not typical for stacks!)
    cout << "Elements (LIFO order): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    } // Output: 20 10
    cout << endl;

    return 0;
}






bool isBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        } else {
            if (s.empty()) return false;
            char top = s.top();
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

// Usage:
cout << isBalanced("({[]})") << endl; // Output: 1 (true)
cout << isBalanced("({[}])") << endl; // Output: 0 (false)