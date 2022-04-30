/**
 * this was tough
 * @file Q56-MergeIntervals.cpp
 * @author your name (you@domain.com)
 * @brief Runtime: 73 ms, faster than 21.50% of C++ online submissions for Merge Intervals.
 *        Memory Usage: 30.3 MB, less than 8.71% of C++ online submissions for Merge Intervals.
 * @version 0.1
 * @date 2022-04-30
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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> range;
        set<vector<int>> mySet;
        range.resize(pow(10,4));
        for (int i = 0; i < intervals.size(); i++)
        {
            if (intervals[i][0] == intervals[i][1])
            {
                int val = intervals[i][0];
                mySet.insert(vector<int>{val, val});
            }
            
            range[intervals[i][0]]++;
            range[intervals[i][1]]--;
        }
        int val = 0;
        int left, right;
        bool isNew = false;
        vector<vector<int>> ret;
        for (int i = 0; i < range.size(); i++)
        {
            if (val == 0 and range[i] > 0)
            {
                isNew = true;
                left = i;
            }
            if (val != 0 and val + range[i] <= 0 and isNew)
            {
                right = i;
                isNew = false;
                for (auto it : mySet)
                {
                    if (it[0] >= left and it[0] <= right)
                    {
                        mySet.erase(it);
                    }
                }
                
                ret.push_back(vector<int>{left, right});
            }
            val += range[i];
        }
        for(auto it : mySet){
            ret.push_back(it);
        }
        sort(ret.begin(), ret.end());
        return ret;
    }
};