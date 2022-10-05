/**
 * @file Q167-TwoSumII.cpp
 * @author your name (you@domain.com)
 * @brief used binary search to find target - numbers[i]
 *      Runtime: 43 ms, faster than 5.56% of C++ online submissions for Two Sum II - Input Array Is Sorted.
 *      Memory Usage: 15.5 MB, less than 93.13% of C++ online submissions for Two Sum II - Input Array Is Sorted.
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

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      vector<int> result;
      for (int i = 0; i < numbers.size(); i++)
      {
        int toFind = target - numbers[i];
        int left, right, mid;
        left = i + 1;
        right = numbers.size();
        while (left < right)
        {
          mid = (left + right) / 2;
          if (numbers[mid] < toFind)
          {
            left = mid + 1;
          }else if(numbers[mid] > toFind){
            right = mid;
          }else{
            result.push_back(i + 1);
            result.push_back(mid + 1);
            return result;
          }
        }
        
      }
      return result;
    }
};