#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
  bool checkIt(int &i, int &j, vector<int> &nums) {
    if (j == nums.size()) {
      return true;
    }
    if (nums[i] > nums[j]) {
      return false;
    }
    i++;
    j++;
    return checkIt(i, j, nums);
  }

public:
  bool isSorted(vector<int> &nums) {
    if (nums.size() == 1) {
      return true;
    }
    int i = 0;
    int j = 1;
    bool answer = true;
    answer = checkIt(i, j, nums);
    return answer;
  }
};
