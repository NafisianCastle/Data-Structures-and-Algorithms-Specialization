<<<<<<< HEAD
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int number_of_components(vector<vector<int> > &adj) {
    int res = 0;
    //write your code here
    return res;
}

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    for(size_t i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    cout << number_of_components(adj);
}
=======
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int number_of_components(vector<vector<int> > &adj) {
    int res = 0;
    //write your code here
    return res;
}

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<vector<int> > adj(n, vector<int>());
    for(size_t i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    cout << number_of_components(adj);
}
>>>>>>> 41b8f92f3a46828fb0f1a61a96c2446049322ce7
