class Solution {
public:
  void rotateMatrix(vector<vector<int>> &matrix) {
    int n = matrix.size() - 1;
    int mid = matrix.size() / 2;
    int i = 0;

    while (i < mid) {
      for (int j = i; j < n - i; j++) {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[n - j][i];
        matrix[n - j][i] = matrix[n - i][n - j];
        matrix[n - i][n - j] = matrix[j][n - i];
        matrix[j][n - i] = temp;
      }
      i++;
    }
  }
};
