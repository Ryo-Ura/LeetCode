/**
 * @file Q35-SearchInsertPosition.cpp
 * @author your name (you@domain.com)
 * @brief Runtime: 0 ms, faster than 100.00% of C++ online submissions for Search Insert Position.
 *        Memory Usage: 9.8 MB, less than 23.97% of C++ online submissions for Search Insert Position.
 *        O(logn)
 * @version 0.1
 * @date 2022-04-23
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
    int searchInsert(vector<int>& nums, int target) {
        int top = nums.size();
        int btm = 0;
        int piv = 0;
        while (btm <= top)
        {
            piv = btm + (top - btm) / 2; 
            if(nums[piv] == target)
                return piv;
            if(nums[piv] < target){
                btm = piv - 1;
            }    
            if(nums[piv] > target){
                top = piv + 1;
            }
        }
        return btm;
    }
};