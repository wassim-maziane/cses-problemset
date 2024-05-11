#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n = 5;
  vector<vector<int>> grid = {{3, 7, 9, 2, 7},
                              {9, 8, 3, 5, 5},
                              {1, 7, 9, 8, 5},
                              {3, 8, 6, 4, 10},
                              {6, 3, 9, 7, 8}};
  vector<vector<int>> grid_sum(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == 0 and i == 0)
        grid_sum[i][j] = grid[i][j];
      else if (j != 0 and i != 0)
        grid_sum[i][j] =
            max(grid_sum[i][j - 1], grid_sum[i - 1][j]) + grid[i][j];
      else if (i == 0)
        grid_sum[i][j] = grid_sum[i][j - 1] + grid[i][j];
      else if (j == 0)
        grid_sum[i][j] = grid_sum[i - 1][j] + grid[i][j];
    }
  }
  cout << grid_sum[n - 1][n - 1];
}
