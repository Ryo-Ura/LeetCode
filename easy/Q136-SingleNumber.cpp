/**
 * @file Q136-SingleNumber.cpp
 * @author Ryo-Ura
 * @brief Runtime: 58 ms, faster than 5.30% of C++ online submissions for Single Number.
 *        Memory Usage: 20.7 MB, less than 5.10% of C++ online submissions for Single Number.
 *        O(n)
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <map>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> num;
        for (int i = 0; i < nums.size(); i++)
        {
            num[nums[i]]++;
        }
        for(auto it : num){
            if(it.second == 1){
                return it.first;
            }
        }
    }
};