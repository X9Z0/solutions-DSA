class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int neg = -1;
        int p = -2;

        vector<int> ans(n,0);

        for(int k = 0; k<n;k++){
            if(nums[k] < 0){
                neg += 2;
                ans[neg] = nums[k];
            }
            if(nums[k] >= 0){
                p += 2;
                ans[p] = nums[k];
            }
        }
        return ans;
    }
};
