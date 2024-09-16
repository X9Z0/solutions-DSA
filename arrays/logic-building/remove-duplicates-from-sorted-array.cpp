class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int element = nums[0];
        for(int j = 0; j<nums.size();j++){
            if(nums[j] != element){
                i++;
                element = nums[j];
                swap(nums[i],nums[j]);
            }
        }
        return i+1;
    }
};
