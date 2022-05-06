/**
 * do this question again
 * @file Q152-MaximumProductSubarray.cpp
 * @author your name (you@domain.com)
 * @brief   Runtime: 15 ms, faster than 24.86% of C++ online submissions for Maximum Product Subarray.
 *          Memory Usage: 13.7 MB, less than 95.40% of C++ online submissions for Maximum Product Subarray.
 * @version 0.1
 * @date 2022-05-05
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
    int maxProduct(vector<int>& nums) {
        int currMax = 1, currMin = 1;
        int ret = *max_element(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if(!nums[i]){
                currMax = 1;
                currMin = 1;
                continue;
            }
            int temp = currMax * nums[i];
            currMax = max(currMax * nums[i], max(currMin * nums[i], nums[i]));
            currMin = min(temp, min(currMin * nums[i], nums[i]));
            ret = max(currMax, ret);
        }
        return ret;
    }
};