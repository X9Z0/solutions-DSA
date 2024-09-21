#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {

    vector<int> answer;
    int n = nums.size();
    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++) {
      hash[nums[i]] = i;
    }
    for (int i = 0; i < n; i++) {
      if (hash.find(target - nums[i]) != hash.end() &&
          hash[target - nums[i]] != i) {
        answer.push_back(min(hash[target - nums[i]], i));
        answer.push_back(max(hash[target - nums[i]], i));
        return answer;
      }
    }
    return answer;
  }
};
