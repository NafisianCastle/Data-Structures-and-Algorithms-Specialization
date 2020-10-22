<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <queue>

using std::vector;
using std::queue;

int color[200000] = {0};
int bipartite(vector<vector<int> > &adj) {
    //write your code here
    queue<int> q;
    q.push(0);
    color[0]=1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if(color[u]==color[v])return 0;
            if(color[v]==0) {
                if(color[u]==1) color[v]=2;
                else color[v]=1;
                q.push(v);
            }
        }
    }
    return 1;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    for (int i = 0; i < m; i++) {
        int x, y;
        std::cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    std::cout << bipartite(adj);
}
=======
#include <iostream>
#include <vector>
#include <queue>

using std::vector;
using std::queue;

int color[200000] = {0};
int bipartite(vector<vector<int> > &adj) {
    //write your code here
    queue<int> q;
    q.push(0);
    color[0]=1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if(color[u]==color[v])return 0;
            if(color[v]==0) {
                if(color[u]==1) color[v]=2;
                else color[v]=1;
                q.push(v);
            }
        }
    }
    return 1;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    for (int i = 0; i < m; i++) {
        int x, y;
        std::cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    std::cout << bipartite(adj);
}
>>>>>>> 41b8f92f3a46828fb0f1a61a96c2446049322ce7
