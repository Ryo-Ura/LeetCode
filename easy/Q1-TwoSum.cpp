/**
 * @file Q1-TwoSum.cpp
 * @author your name (you@domain.com)
 * @brief instead of brute forcing, used hash map to find the number needed, which improved the runtime from O(n^2) to O(n)
 *    Runtime: 28 ms, faster than 56.13% of C++ online submissions for Two Sum.
 *    Memory Usage: 12.5 MB, less than 5.52% of C++ online submissions for Two Sum.
 * @version 0.1
 * @date 2022-10-04
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
#include <queue>
using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int> map;
      vector<int> result;
      for (size_t i = 0; i < nums.size(); ++i){
        map[nums[i]] = i;
      }
      for (int i = 0; i < nums.size(); i++)
      {
        auto ans = map.find(target - nums[i]);
        if (ans != map.end() and i != ans->second)
        {
          result.push_back(i);
          result.push_back(ans->second);
          break;
        }
      }
      return result;
    }
};