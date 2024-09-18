class Solution {
public:
  vector<vector<int>> pascalTriangle(int numRows) {
    vector<vector<int>> ans;
    ans.push_back({1});
    int i = 1;
    while (i != numRows) {
      vector<int> nums;
      nums.push_back(1);
      int n = i;
      for (int j = 1; j < i; j++) {
        int sum = ans[i - 1][j] + ans[i - 1][j - 1];
        nums.push_back(sum);
      }
      nums.push_back(1);
      ans.push_back(nums);
      i++;
    }
    return ans;
  }
};
