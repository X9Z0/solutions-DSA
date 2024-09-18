class Solution {
private:
  void bfs(queue<pair<int, int>> &q, vector<vector<int>> &vis,
           vector<vector<int>> &grid, int n, int m) {
    int length = q.size();
    for (int i = 0; i < length; i++) {
      int r = q.front().first;
      int c = q.front().second;
      q.pop();
      int disR[] = {1, 0, -1, 0};
      int disC[] = {0, 1, 0, -1};

      for (int i = 0; i < 4; i++) {
        int nr = r + disR[i];
        int nc = c + disC[i];
        if (nr >= 0 && nc >= 0 && nr < n && nc < m && !vis[nr][nc] &&
            grid[nr][nc] == 1) {
          vis[nr][nc] = 1;
          grid[nr][nc] = 2;
          q.push({nr, nc});
        }
      }
    }
  }

public:
  int orangesRotting(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 2) {
          q.push({i, j});
        }
      }
    }
    int count = 0;
    while (!q.empty()) {
      bfs(q, vis, grid, n, m);
      count++;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 1) {
          return -1;
        }
      }
    }
    return count - 1;
  }
};
