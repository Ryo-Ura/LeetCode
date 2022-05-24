/**
 * @file Q22-GenerateParentheses.cpp
 * @author your name (you@domain.com)
 * @brief   O()??
 *          Runtime: 17 ms, faster than 11.15% of C++ online submissions for Generate Parentheses.
 *          Memory Usage: 15.5 MB, less than 24.58% of C++ online submissions for Generate Parentheses.
 * @version 0.1
 * @date 2022-05-14
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
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        string parenthesis = "";
        // while open > close
        generateHelper(0, 0, n, parenthesis, ret);
        return ret;
        
    }

    void generateHelper(int openN, int closeN, int n, string par, vector<string>& vec){
        if (openN == closeN and openN == n and closeN == n)
        {
            vec.push_back(par);
            par = "";
            return;
        }
        if (openN < n)
        {
            par.push_back('(');
            generateHelper(openN+1, closeN, n, par, vec);
            if(!par.empty())
                par.pop_back();
        }
        if (openN > closeN)
        {
            par.push_back(')');
            generateHelper(openN, closeN+1, n, par, vec);
            if(!par.empty())
                par.pop_back();
        }
    }
};