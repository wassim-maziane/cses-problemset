#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n, input;
  long long n_moves = 0;
  vector<long long> v;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> input;
    v.push_back(input);
  }
  for (int i = 1; i < n; i++) {
    n_moves += max((long long)0, v[i - 1] - v[i]);
    v[i] = max(v[i], v[i - 1]);
  }
  cout << n_moves;
}
