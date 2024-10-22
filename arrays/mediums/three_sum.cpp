#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> answer;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++) {

      int start = i + 1;
      int end = n - 1;
      if (i > 0 && nums[i] == nums[i - 1])
        continue;
      while (start < end) {
        int target = nums[i] + nums[start] + nums[end];
        if (target == 0) {
          vector<int> a = {nums[i], nums[start], nums[end]};
          answer.push_back(a);
          start++;
          end--;
          while (nums[start - 1] == nums[start])
            start++;
          while (nums[end + 1] == nums[end])
            end--;
        } else if (target < 0) {
          start++;
        } else if (target > 0) {
          end--;
        }
      }
    }
    return answer;
  }
};

int main() {
  Solution s;
  // vector<int> nums = {-1, 0, -1, 2, 1, -4};
  vector<int> nums = {0, 0, 0};
  // // vector<int> nums = {0, 1, 1};
  // vector<int> nums = {-2, 0, 0, 2, 2};
  vector<vector<int>> result = s.threeSum(nums);

  for (const auto &triplet : result) {
    for (int num : triplet) {
      cout << num << " ";
    }
    cout << endl;
  }
}
