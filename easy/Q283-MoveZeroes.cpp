/**
 * @file Q283-MoveZeroes.cpp
 * @author Ryo-Ura
 * @brief 
 *      Runtime: 120 ms, faster than 11.75% of C++ online submissions for Move Zeroes.
 *      Memory Usage: 19.3 MB, less than 58.71% of C++ online submissions for Move Zeroes.
 *      O(n)
 *  
 *      not using erase and push_back cuz they are expensive
 *      Runtime: 22 ms, faster than 85.13% of C++ online submissions for Move Zeroes.
 *      Memory Usage: 19.1 MB, less than 84.00% of C++ online submissions for Move Zeroes.
 * @version 1.1
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
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                count++;
            }
            else if (count != 0)
            {
                // move item forward and insert 0 at that index
                nums[i - count] = nums[i];
                nums[i] = 0;
            }
        }
    }
};