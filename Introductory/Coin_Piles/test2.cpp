#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t;
  ll a, b, sum;

  cin >> t;

  for (ll i = 0; i < t; i++) {
    cin >> a >> b;
    sum = a + b;
    if (sum % 3 == 0 and min(a, b) >= sum / 3)
      cout << "YES" << "\n";
    else
      cout << "NO" << "\n";
  }
}
