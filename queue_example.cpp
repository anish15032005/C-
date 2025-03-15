#include <iostream>
#include <queue>
#include <vector>


using namespace std;  // Should be placed BEFORE first use

//BFS algorithm skeleton
void bfs(vector<vector<int>> graph, int start) {
    queue<int> q;
    vector<bool> visited(graph.size(), false);
    
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        
        // Process current node
        
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);  // Changed from emplace() to push() for clarity
    
    q.back() += 5;
    
    cout <<"back element: "<< q.back() <<endl; //prints 9
    
    //Q is {1,2,9}
    cout << "front element: " << q.front() << endl;//1 
    
    q.pop();//{2,9}
    
    cout <<"front element after deltion: "<< q.front() << endl; // prints 2 
    //size swap empty same as stack
}
    
    
    


int main() {
    explainQueue();
    return 0;
}

