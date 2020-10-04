#include<bits/stdc++.h>
using namespace std;

double minimal_distance(vector<int> x, vector<int> y) {
  //write your code here
  return 0.;
}

int main() {
  size_t n;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (size_t i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  cout << fixed;
  cout << setprecision(9) << minimal_distance(x, y) << "\n";
}
