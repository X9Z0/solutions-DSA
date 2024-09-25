#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int arraySum(vector<int> &nums) {
    if (nums.size() == 1) {
      return nums[0];
    }
    int i = nums[nums.size() - 1];
    nums.pop_back();
    return i + arraySum(nums);
  }
};
