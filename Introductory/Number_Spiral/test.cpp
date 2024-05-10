#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long t, x, y;
  cin >> t;
  long long value, n;
  for (long long i = 0; i < t; i++) {
    cin >> x >> y;
    x--;
    y--;
    n = max(x, y);
    value = 1 + n * (n + 1);
    if (x < y)
      if (n % 2 == 0)
        value += y - x;
      else
        value -= y - x;
    else if (x > y) {
      if (n % 2 == 0)
        value -= x - y;
      else
        value += x - y;
    }

    cout << value << "\n";
  }
}
