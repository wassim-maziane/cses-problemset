#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;
  long max_count = 0;
  map<char,int> m ={{'A', 0},{'T', 0},{'C', 0}, {'G', 0}};
  long max_value = 0;
  string max_key;


  for (auto it = s.begin(); it != s.end(); ++it)
  {
    max_count++;
    if (next(it) == s.end() || *(next(it)) != *it)
    {
        if (max_count > m[*it])
          m[*it] = max_count;
        max_count = 0;
    }
  }
  for (auto pair: m)
  {
    if (pair.second > max_value)
      max_value = pair.second;
  }
  cout << max_value;
}
