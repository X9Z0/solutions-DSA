class Solution {
private:
    void swap(vector<int> &nums, int &i, int &j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
public:
    vector<int> selectionSort(vector<int>& nums) {
        int minimum = 0;
        for(int i = 0; i < nums.size(); i++){
            minimum = i;

            for(int j = i+1; j <nums.size();j++){  
                if(nums[minimum] > nums[j]){
                    minimum = j;
                }
            }
            swap(nums,i,minimum);
        }
        return nums;
    }
};
