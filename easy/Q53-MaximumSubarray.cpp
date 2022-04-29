/**
 * @file Q53-MaximumSubarray.cpp
 * @author Ryo-Ura
 * @brief Runtime: 137 ms, faster than 56.40% of C++ online submissions for Maximum Subarray.
 *        Memory Usage: 67.8 MB, less than 12.39% of C++ online submissions for Maximum Subarray.
 *        O(n)
 * @version 0.1
 * @date 2022-04-29
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

using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // nums = [-2,1,-3,4,-1,2,1,-5,4]
        // Output: 6

        // if sum at the current index is negative, start summing from that index
        // [-2,1,-3,4,-1,2,1,-5,4]
        // [1,-3,4,-1,2,1,-5,4]
        // [4,-1,2,1,-5,4]

        long long int sum = nums[0];
        long long int max = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum < 0 or sum < nums[i])
                sum = nums[i];
            if (max < sum)
                max = sum;
        }
        return max;
    }
};
