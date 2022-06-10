/**
 * @file Q344-ReverseString.cpp
 * @author your name (you@domain.com)
 * @brief  O(n)
 *          Runtime: 42 ms, faster than 19.25% of C++ online submissions for Reverse String.
 *          Memory Usage: 23.3 MB, less than 41.53% of C++ online submissions for Reverse String.
 * @version 0.1
 * @date 2022-06-10
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
    void reverseString(vector<char>& s) {
        for (int i = 0; i < s.size() / 2; i++)
        {
            char temp = s[s.size() - 1 - i];
            s[s.size() - i - 1] = s[i];
            s[i] = temp;
        }
        
    }
};