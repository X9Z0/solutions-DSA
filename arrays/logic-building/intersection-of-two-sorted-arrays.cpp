class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        int i = 0;
        int j = 0;
        int n1 = nums1.size();
        int n2 = nums2.size();

        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j]){
                intersection.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i] > nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        return intersection;
        
    }
};
