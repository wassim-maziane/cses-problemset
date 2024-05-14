#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  ll final_sum_set;
  ll sum_set = 0;
  vector<ll> set1, set2;

  cin >> n;
  if (n * (n + 1) % 4 != 0)
    cout << "NO";
  else {
    final_sum_set = n * (n + 1) / 4;
    for (ll i = n; i > 0; i--) {
      if (sum_set + i <= final_sum_set) {
        sum_set += i;
        set1.push_back(i);
      } else
        set2.push_back(i);
    }
    if (sum_set == final_sum_set) {
      cout << "YES" << "\n";
      cout << set1.size() << "\n";
      for (auto elt : set1)
        cout << elt << " ";
      cout << "\n" << set2.size() << "\n";
      for (auto elt : set2)
        cout << elt << " ";
      return 0;
    }
    cout << "NO";
  }
}
