/**
 * @file Q88-MergeSortedArray.cpp
 * @author your name (you@domain.com)
 * @brief O(n + m)
 *          Runtime: 3 ms, faster than 72.21% of C++ online submissions for Merge Sorted Array.
 *          Memory Usage: 9.3 MB, less than 31.27% of C++ online submissions for Merge Sorted Array.
 *  
 *          this solution uses shallow copy, so it assigns parameter's vector to point to local vector
 *              this causes dangling pointer as the pointing vector is only valid in the local scope
 *  
 *  
 *          O(n + m)
 *          Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
 *          Memory Usage: 8.9 MB, less than 90.25% of C++ online submissions for Merge Sorted Array.
 *  
 *          fixed dangling pointer bug by not using local vector to store the answer
 * @version 0.1
 * @date 2022-06-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <math.h>
#include <utility>
#include <limits>
#include <unordered_set>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int idx1 = 0, idx2 = 0;
        while (idx1 < m and idx2 < n)
        {
            if (nums1[idx1] < nums2[idx2])
            {
                ans.push_back(nums1[idx1]);
                idx1++;
            }else{
                ans.push_back(nums2[idx2]);
                idx2++;
            }
        }
        if (idx1 < m and idx2 >= n)
        {
            while (idx1 < m)
            {
                ans.push_back(nums1[idx1]);
                idx1++;
            }
        }
        if (idx1 >= m and idx2 < n)
        {
            while (idx2 < n)
            {
                ans.push_back(nums2[idx2]);
                idx2++;
            }
        }
        nums1 = ans;
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx1 = m - 1, idx2 = n - 1, insertIdx = m + n - 1;
        while (insertIdx >= 0)
        {
            if (idx1 >= 0 and idx2 >= 0)
            {
                if(nums1[idx1] > nums2[idx2]){
                    nums1[insertIdx] = nums1[idx1];
                    idx1--;
                }else if(nums1[idx1] <= nums2[idx2]){
                    nums1[insertIdx] = nums2[idx2];
                    idx2--;
                }
            }else if(idx2 < 0){
                return;
            }else if (idx1 < 0)
            {
                nums1[insertIdx] = nums2[idx2];
                idx2--;
            }
            insertIdx--;
        }
        
    }
};