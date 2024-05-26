#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

string solve(ll a, ll b) {
  while (a > 1 or b > 1) {
    if (a > b) {
      a -= 2;
      b -= 1;
    } else {
      a -= 1;
      b -= 2;
    }
  }
  if (a == 0 and b == 0) {
    return "YES";
  } else {
    return "NO";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t, a, b;

  cin >> t;
  map<pair<ll, ll>, string> m;
  for (ll i = 0; i < t; i++) {
    cin >> a >> b;
    if (m.find({a, b}) != m.end()) {
      cout << m[{a, b}] << "\n";
      continue;
    }
    m[{a, b}] = solve(a, b);
    cout << solve(a, b) << "\n";
  }
}
