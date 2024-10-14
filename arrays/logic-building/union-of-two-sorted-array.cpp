#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> unionArray(vector<int> &nums1, vector<int> &nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> unionAr;

    int i = 0;
    int j = 0;

    while (i < n1 && j < n2) {
      if (nums1[i] <= nums2[j]) {
        if (unionAr.size() == 0 || unionAr.back() != nums1[i]) {
          unionAr.push_back(nums1[i]);
        }
        i++;
      } else {
        if (unionAr.size() == 0 || unionAr.back() != nums2[j]) {
          unionAr.push_back(nums2[j]);
        }
        j++;
      }
    }
    while (i < n1) {
      if (unionAr.size() == 0 || unionAr.back() != nums1[i]) {
        unionAr.push_back(nums1[i]);
      }
      i++;
    }
    while (j < n2) {
      if (unionAr.size() == 0 || unionAr.back() != nums2[j]) {
        unionAr.push_back(nums2[j]);
      }
      j++;
    }
    return unionAr;
  }
};
