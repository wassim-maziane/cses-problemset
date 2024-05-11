#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  long long allowed;
  long long disallowed;
  long long total;
  cin >> n;
  vector<vector<int>> grid(n, vector<int>(n));
  for (int i = 1; i <= n; i++) {
    total = pow(i, 2) * (pow(i, 2) - 1) / 2;
    disallowed = 4 * (i - 1) * (i - 2);
    allowed = total - disallowed;
    cout << allowed << "\n";
  }
}
