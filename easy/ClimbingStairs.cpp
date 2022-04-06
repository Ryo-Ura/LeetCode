#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
/**
 * @brief Basically it's a fibonacci. incomplete
 * 
 */
class Solution {
public:
    int climbStairs(int n) {
        /**
         * @brief Input: n = 3
         * Output: 3
         * Explanation: There are three ways to climb to the top.
         *  1. 1 step + 1 step + 1 step
         *  2. 1 step + 2 steps
         *  3. 2 steps + 1 step
         */
        if (n < 3)
            return n;
        int twoStep = 1;
        int oneStep = 1;
        int count = 0;
        count = pow(twoStep, 2) + 1;
        return count;
    }
};