/**
 * @file Q167-TwoSumII.cpp
 * @author your name (you@domain.com)
 * @brief 
 *        used binary search to find target - numbers[i]
 *      Runtime: 43 ms, faster than 5.56% of C++ online submissions for Two Sum II - Input Array Is Sorted.
 *      Memory Usage: 15.5 MB, less than 93.13% of C++ online submissions for Two Sum II - Input Array Is Sorted.
 * 
 *        used different approach in finding target which slightly increased the performance in Runtime
 *      Runtime: 26 ms, faster than 46.48% of C++ online submissions for Two Sum II - Input Array Is Sorted.
 *      Memory Usage: 15.7 MB, less than 43.57% of C++ online submissions for Two Sum II - Input Array Is Sorted.
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
      int left, right;
      left = 0, right = numbers.size() - 1;
      while (left < right)
      {
        if((numbers[left] + numbers[right]) > target){
          right--;
        }else if((numbers[left] + numbers[right]) < target){
          left++;
        }else{
          result.push_back(left + 1);
          result.push_back(right + 1);
          break;
        }
      }
      return result;
    }
};