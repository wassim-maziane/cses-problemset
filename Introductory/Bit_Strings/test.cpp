#include <bits/stdc++.h>

typedef unsigned long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  ll result = 1;
  ll modulo = pow(10, 9) + 7;

  cin >> n;

  for (ll i = 0; i < n; i++) {
    result = (result * 2) % modulo;
  }
  cout << result;
}
