#include <vector>
#include <list>
#include <queue>
#include <set>

int main() {
    // O(1) push (amortized)
    std::vector<int> vec;
    vec.push_back(10); 

    // O(1) push (head/tail)
    std::list<int> lst;
    lst.push_front(20);

    // O(log n) push (heapify)
    std::priority_queue<int> pq;
    pq.push(30);

    // O(log n) push (tree rebalancing)
    std::set<int> s;
    s.insert(40);

    return 0;
}