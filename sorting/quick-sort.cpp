class Solution {
private:
    void swap(vector<int> &nums, int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    int partition(vector<int> &nums, int low, int high){
        int pivot = nums[high];
        int i = low - 1;
        for(int j = low; j< high; j++){
            if(nums[j] <= pivot){
                i++;
                swap(nums,i,j);
            }
        }
        swap(nums,i+1,high);
        return i+1;
    }
    void qsort(vector<int> &nums, int low, int high){
        if(low < high){
            int pi = partition(nums,low,high);
            qsort(nums,low,pi-1);
            qsort(nums,pi+1,high);
        }
    }
public:
    vector<int> quickSort(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        qsort(nums,low,high);
        return nums;
    }
};
