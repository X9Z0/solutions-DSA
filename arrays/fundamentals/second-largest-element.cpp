class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int maximum = nums[0];
        for(int i = 0; i< nums.size();i++){
            if(nums[i] > maximum){
                maximum = nums[i];
            }
        }
        int secondmax = -1;
        for(int i = 0; i< nums.size();i++){
            if(nums[i] > secondmax && nums[i] != maximum){
                secondmax = nums[i];
            }
        }
        return secondmax;
    }
};
