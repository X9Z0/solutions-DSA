#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  void reverseAr(int &i, int &j, vector<int> &nums) {
    if (i >= j) {
      return;
    }
    swap(nums[i], nums[j]);
    i++;
    j--;
    reverseAr(i, j, nums);
  }

public:
  vector<int> reverseArray(vector<int> &nums) {
    int i = 0;
    int j = nums.size() - 1;
    reverseAr(i, j, nums);
    return nums;
  }
};
