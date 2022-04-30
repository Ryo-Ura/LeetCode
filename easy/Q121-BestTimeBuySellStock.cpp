/**
 * @file Q121-BestTimeBuySellStock.cpp
 * @author your name (you@domain.com)
 * @brief Runtime: 137 ms, faster than 80.03% of C++ online submissions for Best Time to Buy and Sell Stock.
 *        Memory Usage: 93.4 MB, less than 13.35% of C++ online submissions for Best Time to Buy and Sell Stock.
 *        O(n)
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
    int maxProfit(vector<int>& prices) {
        int buyPrice;
        buyPrice = numeric_limits<int>::max();
        int temp = 0, profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (buyPrice > prices[i])
            {
                buyPrice = prices[i];
            }
            temp = prices[i] - buyPrice;
            if (profit < temp)
            {
                profit = temp;
            }
        }
        return profit;
    }
};