#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // note: sorting strs might be a good idea as 
        //          you can just check the first and the last string 
        long long size = strs.size();
        bool isCommon = true;
        long long index = 0;
        char ch = strs[0][0];
        string ret;
        for (int i = 0; i < strs[0].length(); i++)
        {
            for (int j = 0; j < size; j++)
            {
                string str = strs[j];
                if (str[index] == ch)   
                {
                    if (j + 1 == size)
                    {
                        ret += ch;
                        index++;
                    }
                    
                }else{
                    isCommon = false;
                    break;
                }
                
            }
            if (!isCommon)
            {
                return ret;
            }
            ch = strs[i][index];
        }
        return ret;
        
    }
};
