class Solution {
public:
  vector<int> leaders(vector<int> &nums) {
    int n1 = nums.size();
    int great = nums[n1 - 1];
    vector<int> result;
    result.push_back(great);
    for (int i = n1 - 2; i >= 0; i--) {
      if (nums[i] > great) {
        great = nums[i];
        result.push_back(great);
      }
    }
    int i = 0;
    int j = result.size() - 1;
    while (i < j) {
      swap(result[i], result[j]);
      i++;
      j--;
    }
    return result;
  }
};
