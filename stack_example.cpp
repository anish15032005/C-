#include <iostream>
#include <stack>

using namespace std;  // Should be placed BEFORE first use

void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.push(5);  // Changed from emplace() to push() for clarity
    
    cout << st.top() << endl;  // Added endl
    st.pop();
    
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << boolalpha << st.empty() << endl;  // Show true/false
    
    stack<int> st1, st2;
    st1.swap(st2);
}

int main() {
    explainStack();
    return 0;
}