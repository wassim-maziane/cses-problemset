#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  long long n;
  long long elt;
  set<long long> s;
  long long it2 = 1;
  int indicator = 0;

  cin >> n;

  for (int i = 0; i < n - 1; i++) {
    cin >> elt;
    s.insert(elt);
  }
  for (auto it = s.begin(); it != s.end(); it++) {
    if (*it != it2) {
      cout << it2;
      indicator = 1;
      break;
    }
    it2++;
  }
  if (indicator == 0)
    cout << it2;
}
