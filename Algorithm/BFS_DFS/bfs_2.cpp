#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph {
    private:
    int V;
    vector<list<int>> adj;

    public:
    Graph(int v);
    void addEdge(int v, int w);
    void BFS(int s); 
};

Graph::Graph(int v){
    V = v;
    adj.resize(v);
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
 }


void Graph::BFS(int s){
    cout << V << " : " << endl;
    vector<bool> visited(V);
    list<int> queue;

    visited[s] = true;
    queue.push_back(s);


    while (!queue.empty()) {
    s = queue.front();
    queue.pop_front();

    cout << "Checking adjacent vertices for vertex " << s << endl;
        for (auto i : adj[s]) {
            if (!visited[i]) {
                cout << "Visit and enqueue " << i << endl;
                visited[i] = true;
                queue.push_back(i);
            }
        }
    }


}

int main() {


  Graph g(6);

  g.addEdge(0, 1);
  g.addEdge(0, 2);

  g.addEdge(1, 0);
  g.addEdge(1, 3);
  g.addEdge(1, 4);

  g.addEdge(2, 0);
  g.addEdge(2, 4);

  g.addEdge(3, 1);
  g.addEdge(3, 4);
  g.addEdge(3, 5);

  g.addEdge(4, 1);
  g.addEdge(4, 2);
  g.addEdge(4, 3);
  g.addEdge(4, 5);

  g.addEdge(5, 3);
  g.addEdge(5, 4);

  g.BFS(2);


    return 0;
}