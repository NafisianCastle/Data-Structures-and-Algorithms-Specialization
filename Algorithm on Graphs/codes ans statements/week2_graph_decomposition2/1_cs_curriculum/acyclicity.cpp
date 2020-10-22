<<<<<<< HEAD
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool visited[2000] = {0}, Stack[2000] = {0};
bool dfs(int u, vector<vector<int> > &adj) {
    visited[u] = 1,Stack[u] = 1;
    for(int v : adj[u]) {
        if(Stack[v])return 1;
        if(!visited[v])dfs(v,adj);
    }
    Stack[u]=0;
    return 0;
}
int acyclic(vector<vector<int> > &adj) {
    //write your code here
    int n = (int)adj.size();
    for(int i = 0; i < n; i++) {
        if(dfs(i, adj))return 1;
    }
    return 0;
}

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    for(size_t i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
    }
    cout << acyclic(adj);
}
=======
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool visited[2000] = {0}, Stack[2000] = {0};
bool dfs(int u, vector<vector<int> > &adj) {
    visited[u] = 1,Stack[u] = 1;
    for(int v : adj[u]) {
        if(Stack[v])return 1;
        if(!visited[v])dfs(v,adj);
    }
    Stack[u]=0;
    return 0;
}
int acyclic(vector<vector<int> > &adj) {
    //write your code here
    int n = (int)adj.size();
    for(int i = 0; i < n; i++) {
        if(dfs(i, adj))return 1;
    }
    return 0;
}

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    for(size_t i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
    }
    cout << acyclic(adj);
}
>>>>>>> 41b8f92f3a46828fb0f1a61a96c2446049322ce7
