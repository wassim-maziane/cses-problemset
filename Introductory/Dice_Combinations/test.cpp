#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long sum;

  cin >> sum;
  vector<int> v(sum, 1);
  for (int i = 0; i < sum; i++) {
    for (int j = 1; j <= 6; j++) {
      if (i >= j)
        v[i] += v[i - j];
    }
    if (i > 6) {
    }
  }
  cout << v[sum - 1];
}
