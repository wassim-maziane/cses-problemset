#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n, value, number;
  vector<ll> v = {0, 0, 0, 0, 1};

  cin >> n;
  for (ll i = 6; i <= n; i++) {
    if (i % 5 != 0)
      v.push_back(v[i - 1 - i % 5]);
    else {
      value = 0;
      number = i;
      while (number % 5 == 0) {
        value++;
        number /= 5;
      }
      v.push_back(v[i - 1 - 5] + value);
    }
  }
  cout << v[n - 1];
}
