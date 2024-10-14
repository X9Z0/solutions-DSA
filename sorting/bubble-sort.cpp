#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void swap(vector<int> &nums, int i, int &j) {
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
  }

public:
  vector<int> bubbleSort(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = 1; j < nums.size() - i; j++) {
        if (nums[j - 1] > nums[j]) {
          swap(nums, j - 1, j);
        }
      }
    }
    return nums;
  }
};
