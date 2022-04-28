/**
 * @file Q283-MoveZeroes.cpp
 * @author Ryo-Ura
 * @brief 
 *      Runtime: 120 ms, faster than 11.75% of C++ online submissions for Move Zeroes.
 *      Memory Usage: 19.3 MB, less than 58.71% of C++ online submissions for Move Zeroes.
 *      O(n)
 * @version 0.1
 * @date 2022-04-27
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
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        for (int i = size - 1; i >= 0; i--)
        {
            if (nums[i] == 0)
            {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
            }
            
        }
        
    }
};