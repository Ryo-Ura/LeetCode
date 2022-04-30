/**
 * @file Q3-LongestSubstringWithoutRepeatingCharacters.cpp
 * @author your name (you@domain.com)
 * @brief Runtime: 1394 ms, faster than 5.01% of C++ online submissions for Longest Substring Without Repeating Characters.
 *        Memory Usage: 262.3 MB, less than 5.37% of C++ online submissions for Longest Substring Without Repeating Characters.
 *        O(n)
 *  
 *        using unordered_set
 *        Runtime: 964 ms, faster than 6.95% of C++ online submissions for Longest Substring Without Repeating Characters.
 *        Memory Usage: 149.1 MB, less than 7.54% of C++ online submissions for Longest Substring Without Repeating Characters.
 * @version 1.1
 * @date 2022-04-29
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
#include <unordered_set>


using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int currSize = 0;
        int max = 0;
        int temp = 0;
        unordered_set<char> mySet;
        for (int i = 0; i < s.size(); i++)
        {
            if (!mySet.insert(s[i]).second)
            {
                max = (max < currSize) ? currSize : max;
                mySet.clear();
                i = i-temp;
                currSize = 0;
                temp = 0;
            }else{
                temp++;
                currSize++;
            }
        }
        return (max < currSize) ? currSize : max;
    }
};