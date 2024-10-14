#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void swap(vector<int> &nums, int j, int &i) {
    int temp = nums[j];
    nums[j] = nums[i];
    nums[i] = temp;
  }

public:
  vector<int> insertionSort(vector<int> &nums) {
    for (int i = 1; i < nums.size(); i++) {
      for (int j = i; j > 0; j--) {
        if (nums[j - 1] > nums[j]) {
          swap(nums, j - 1, j);
        }
      }
    }
    return nums;
  }
};
