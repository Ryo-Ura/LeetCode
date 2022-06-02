/**
 * @file Q11-ContainerWithMostWater.cpp
 * @author your name (you@domain.com)
 * @brief   O(n)        brute force = O(n^2) and it times out
 *          Runtime: 163 ms, faster than 17.85% of C++ online submissions for Container With Most Water.
 *          Memory Usage: 59 MB, less than 81.92% of C++ online submissions for Container With Most Water.
 * @version 0.1
 * @date 2022-06-02
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
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1; 
        int maxAmount = 0, amount = 0;
        while (left < right)
        {
            if(height[left] < height[right]){
                amount = (right - left) * height[left];
                maxAmount = max(maxAmount, amount);
                left++;
            }else{
                amount = (right - left) * height[right];
                maxAmount = max(maxAmount, amount);
                right--;
            }
        }
        return maxAmount;        
    }
};