#include<bits/stdc++.h>
using namespace std;

bool visited[20000], rev_visited[20000];
stack<int> used;
void dfs(vector<vector<int> > &adj, int u) {
    visited[u] = 1;
    for(int i = 0; i < adj[u].size(); i++)
        if(!visited[adj[u][i]])
            dfs(adj, adj[u][i]);
    used.push(u);
    return;
}
void dfs2(vector<vector<int> > &rev_adj, int u) {
    rev_visited[u] = 1;
    for(int i = 0; i < rev_adj[u].size(); i++)
        if(!rev_visited[rev_adj[u][i]])
            dfs2(rev_adj, rev_adj[u][i]);
    return;
}
int number_of_strongly_connected_components(vector<vector<int> > adj, vector<vector<int> > rev_adj) {
    int result = 0;
    int n = adj.size();
    for(int i = 0; i < n; i++) visited[i] = 0;
    for(int i = 0; i < n; i++) {
        if(!visited[i]) dfs(adj, i);
    }
    while(!used.empty()) {
        int node = used.top();
        used.pop();
        if(!rev_visited[node]) {
            result++;
            dfs2(rev_adj, node);
        }
    }
    return result;
}

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    vector<vector<int> > rev_adj(n, vector<int>());
    for(size_t i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        rev_adj[y - 1].push_back(x - 1);
    }
    cout << number_of_strongly_connected_components(adj, rev_adj);
}
