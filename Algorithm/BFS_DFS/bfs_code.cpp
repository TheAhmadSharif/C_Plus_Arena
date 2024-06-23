#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, const vector<vector<int>>& graph) {
    int n = graph.size(); 
    vector<bool> visited(n, false); 
    queue<int> q; 

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        cout << current << " "; // Process the current node

        // Visit all the neighbors of the current node
        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    // Example graph represented as an adjacency list
    vector<vector<int>> graph = {
        {1, 2},    // Neighbors of node 0
        {0, 3, 4}, // Neighbors of node 1
        {0, 4},    // Neighbors of node 2
        {1, 5},    // Neighbors of node 3
        {1, 2, 5}, // Neighbors of node 4
        {3, 4}     // Neighbors of node 5
    };

    int startNode = 0; // Starting node for BFS
    cout << "BFS starting from node " << startNode << ": ";
    bfs(startNode, graph);

    return 0;
}