class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int greatest = nums[0];
        for(int i = 0; i< nums.size();i++){
            if(nums[i] > greatest){
                greatest = nums[i];
            }
        }
        bool included = false;
        int sum = (greatest*(greatest+1))/2;
        for(int i = 0; i< nums.size();i++){
            if(nums[i] == 0) included = true;
            sum -= nums[i];
        }
        if(included && sum == 0) return greatest + 1;
        return sum;
    }
};
