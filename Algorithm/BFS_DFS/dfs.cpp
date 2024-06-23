#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>

using namespace std;

#define MAX 10
vector<int> edges[MAX];

/*   1       5
   / \        \
  2   3        6
  \  /
   4
*/
bool visited[MAX];
void dfs(int node){
    cout << node << " node " << endl;
    visited[node] = true; 

    for( auto it : edges[node]) {
        // cout << it << " it" << endl;
        if(!visited[it]) {
           // cout << it << " it inside" << endl;
            dfs(it);
        }
    }
}
int main() {

    edges[1].emplace_back(2);
    edges[2].emplace_back(1);
    edges[1].emplace_back(3);
    edges[3].emplace_back(1);
    edges[2].emplace_back(4);
    edges[4].emplace_back(2);
    edges[3].emplace_back(4);
    edges[4].emplace_back(3);

    edges[5].emplace_back(6);
    edges[6].emplace_back(5);

    for( int i = 1; i < 7; i ++) {
        if(!visited[i]) {
            dfs(i);
        }
    }
    
 
    return 0;
}
