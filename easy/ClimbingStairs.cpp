#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
/**
 * @todo should try this again
 * @brief Basically it's a fibonacci. 
 *      Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
 *      Memory Usage: 6 MB, less than 55.57% of C++ online submissions for Climbing Stairs.
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
        int oneStep = 2;
        int twoStep = 1;
        int count = 0;
        // f(0) = 0, f(1) = 1, 
        // f(2) = f(0) + f(1)
        // f(3) = f(2) + f(1) = f(1) + f(0) + f(1)
        for (int i = 3; i <= n; i++)
        {
            count = oneStep + twoStep;
            twoStep = oneStep;
            oneStep = count;
        }
        return count;
    }
};