/**
 * @file Q66-PlusOne.cpp
 * @author me
 * @brief   this runs in O(n) for the worst case where vector has to be resized
 * 
 *          Runtime: 3 ms, faster than 60.86% of C++ online submissions for Plus One.
 *          Memory Usage: 8.8 MB, less than 62.24% of C++ online submissions for Plus One.
 * @version 0.1
 * @date 2022-05-27
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
    vector<int> plusOne(vector<int>& digits) {
        int currIdx = digits.size() - 1;
        int carry = 1;
        while (carry == 1 and currIdx >= 0)
        {
            if (digits[currIdx] == 9)
            {
                carry = 1;
                digits[currIdx] = 0;
            }else{
                digits[currIdx]++;
                carry = 0;
            }
            currIdx--;
        }

        if (carry != 0)
        {
            digits.resize(digits.size() + 1);
            for (int i = digits.size() - 2; i >= 0; i--)
            {
                digits[i+1] = digits[i];
            }
            digits[0] = 1;
        }
        return digits;
        
    }
};