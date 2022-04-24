/**
 * @file Q67-AddBinary.cpp
 * @author Ryo-Ura
 * @brief Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Binary.
 *        Memory Usage: 6.3 MB, less than 52.59% of C++ online submissions for Add Binary.
 * @version 0.1
 * @date 2022-04-10
 * 
 * @copyright Copyright (c) 2022
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int sizeA, sizeB;
        sizeA = a.size();
        sizeB = b.size();
        int idxA, idxB;
        idxA = sizeA - 1;
        idxB = sizeB - 1;
        string ans;
        int rem = 0;
        while (idxA >= 0 && idxB >= 0)
        {
            int valA, valB;
            valA = a[idxA] - '0';
            valB = b[idxB] - '0';
            if (valA & valB and rem)
            {
                rem = 1;
                ans += '1';
            }else if (valA & valB and !rem)
            {
                rem = 1;
                ans += '0';
            }else if (valA | valB and rem)
            {
                rem = 1;
                ans += '0';
            }else if (valA | valB and !rem){
                rem = 0;
                ans += '1';
            }else {
                ans += (char)(rem + '0');
                
                // if(rem == 1)
                //     ans += '1';
                // else
                //     ans += '0';
                rem = 0;
            }
            idxA--;
            idxB--;
            
        }
        
        string rest = (sizeA > sizeB)?a:b;
        int restIdx = (sizeA > sizeB)?idxA:idxB;
        while (restIdx >= 0)
        {
            int val = rest[restIdx] - '0';
            if (!rem)
            {
                ans += rest[restIdx];
            }else{
                if(val == 1){
                    rem = 1;
                    ans += '0';
                }else{
                    rem = 0;
                    ans += '1';
                }
            }
            restIdx--;
        }
        if(rem)
            ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};