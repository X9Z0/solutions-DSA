#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

// class Solution {
// private:
//   int bfs(queue<pair<int, int>> &q, vector<vector<int>> &grid, int n, int m)
//   {
//     vector<int> check;
//     int count = 0;
//     while (!q.empty()) {
//       int r = q.front().first;
//       int c = q.front().second;
//       q.pop();
//       int disR[] = {1, 0, -1, 0};
//       int disC[] = {0, 1, 0, -1};
//       for (int i = 0; i < 4; i++) {
//         int nr = r + disR[i];
//         int nc = c + disC[i];
//         if (nr >= 0 && nc >= 0 && nr < n && nc < m) {
//           q.push({nr, nc});
//           check.push_back(grid[nr][nc]);
//         }
//       }
//       for (int i = 0; i < check.size(); i++) {
//         if (check[i] == 1) {
//           count++;
//           return count;
//         }
//       }
//       count++;
//     }
//     return count;
//   }
//
// public:
//   vector<vector<int>> nearest(vector<vector<int>> grid) {
//     int n = grid.size();
//     int m = grid[0].size();
//     vector<vector<int>> answer(n, vector<int>(m, 0));
//     vector<vector<int>> vis(n, vector<int>(m, 0));
//     for (int i = 0; i < n; i++) {
//       for (int j = 0; j < m; j++) {
//         if (grid[i][j] == 0) {
//           queue<pair<int, int>> q;
//           q.push({i, j});
//           int c = bfs(q, grid, n, m);
//           answer[i][j] = c;
//         }
//       }
//     }
//     return answer;
//   }
// };

// class Solution {
// public:
//   vector<vector<int>> nearest(vector<vector<int>> grid) {
//     int n = grid.size();
//     int m = grid[0].size();
//     vector<pair<int, int>> zeros;
//     vector<pair<int, int>> ones;
//     vector<vector<int>> answer(n, vector<int>(m, 0));
//     for (int i = 0; i < m; i++) {
//       for (int j = 0; j < n; j++) {
//         if (grid[i][j] == 1) {
//           ones[i].first = i;
//           ones[i].second = j;
//         }
//         if (grid[i][j] == 0) {
//           zeros[i].first = i;
//           zeros[i].second = j;
//         }
//       }
//     }
//     n = ones.size();
//     m = zeros.size();
//
//     int count = 0;
//
//     for (int i = 0; i < n; i++) {
//       for (int j = 0; j < m; j++) {
//         int dis = abs(zeros[i].first - ones[j].first) +
//                   abs(zeros[i].second - ones[j].second);
//         count = min(count, dis);
//       }
//       answer[zeros[i].first][zeros[i].second] = count;
//       count = 0;
//     }
//     return answer;
//   }
// };

class Solution {
private:
  void bfs(vector<vector<int>> &grid, vector<vector<int>> &vis,
           queue<pair<int, int>> &q, vector<vector<int>> &answer, int n,
           int m) {
    while (!q.empty()) {
      int r = q.front().first;
      int c = q.front().second;
      q.pop();

      int disR[] = {-1, 0, 1, 0};
      int disC[] = {0, 1, 0, -1};
      for (int i = 0; i < 4; i++) {
        int nr = r + disR[i];
        int nc = c + disC[i];
        if (nr < n && nr >= 0 && nc < m && nc >= 0 && !vis[nr][nc] &&
            grid[nr][nc] == 0) {
          vis[nr][nc] = 1;
          answer[nr][nc] = answer[r][c] + 1;
          q.push({nr, nc});
        }
      }
    }
  }

public:
  vector<vector<int>> nearest(vector<vector<int>> grid) {
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    vector<vector<int>> answer(n, vector<int>(m, 0));
    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 1) {
          answer[i][j] = 0;
          vis[i][j] = 1;
          q.push({i, j});
        }
      }
    }
    bfs(grid, vis, q, answer, n, m);
    return answer;
  }
};
