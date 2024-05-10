#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long n;
  vector<long long> v;

  cin >> n;
  if (n < 4 && n != 1) {
    cout << "NO SOLUTION";
    return 0;
  }
  for (long long i = 1; i <= n; i++) {
    if (i % 2 == 0)
      cout << i;
  }
  for (long long i = 1; i <= n; i++) {
    if (i % 2 == 1)
      cout << i;
  }
}
