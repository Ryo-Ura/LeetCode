#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution {
public:
    // string minimizeResult(string expression) {
        
    // }
    int perform(int x, int y, char op) {
        if(op == '+') return x + y;
        if(op == '-') return x - y;
        if(op == '*') return x * y;
        return 0;
    }
    
    vector<int> calcMin(string exp) {
        
        vector<int> results;
        bool isNumber = 1;
    
        for(int i = 0; i < exp.length(); i++) {
            if(!isdigit(exp[i])) {
                isNumber = 0;
                vector<int> left = calcMin(exp.substr(0, i));
                vector<int> right = calcMin(exp.substr(i + 1));
                
                for(int x : left) {
                    for(int y : right) {
                        int val = perform(x, y, exp[i]);
                        results.push_back(val);
                    }
                }
                
            }
        }
        
        if(isNumber == 1) results.push_back(stoi(exp));
        return results;
    }
};

int main()
{
    string exp = "247+38";
    Solution solution = Solution();
    vector<int> sol = solution.calcMin(exp);
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << endl;
    }
    
    return 0;
}
