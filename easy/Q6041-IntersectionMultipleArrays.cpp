/**
 * @file Q6041-IntersectionMultipleArrays.cpp
 * @author Ryo-Ura
 * @brief   from Weekly Contest 290
 *          O(n * m)
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

using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int numArr = nums.size();
        map<int, int> arrMap;
        for (int i = 0; i < numArr; i++)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                arrMap[nums[i][j]]++;
            }
        }
        vector<int> ret;
        for(auto [key, val] : arrMap){
            if(val == numArr){
                ret.push_back(key);
            }
        }
        return ret;
        
    }
};