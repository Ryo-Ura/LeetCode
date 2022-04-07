#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
/**
 * @brief 
 *      Runtime: 4 ms,        faster than 40.33% of C++ online submissions for Length of Last Word.
 *      Memory Usage: 6.6 MB, less than 51.71% of C++ online submissions for Length of Last Word.
 */

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int index = 0;
        if (s[s.size() - 1] != ' ')
        {
            index = s.size() - 1;
        }else{
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] != ' ')
                {
                    index = i;
                    break;
                }
            }
            
        }
        for (int i = index; i >= 0; i--)
            {
                if (s[i] == ' ')               
                    break;
                else
                    count++;
            }
        return count;
    }
};