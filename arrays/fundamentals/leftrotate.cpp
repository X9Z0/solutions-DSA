class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int value = 0;
        for(int i = 0; i< k;i++){
            value = nums[0];
            nums.erase(nums.begin());
            nums.push_back(value);
        }
    }
};
