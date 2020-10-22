#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int dist[200000] = {0};
int distance(vector<vector<int> > &adj, int s, int t) {
    //write your code here
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == 0) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
            if(v==t)return dist[t];
        }
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    int s, t;
    cin >> s >> t;
    s--, t--;
    cout << distance(adj, s, t);
}
