#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  ll value = 0;

  cin >> n;

  while (n / 5 != 0) {
    value += n / 5;
    n = n / 5;
  }
  cout << value;
}
