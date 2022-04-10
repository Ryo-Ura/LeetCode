#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
class Solution {
public:
    int largestInteger(int num) {
        
        vector<int> elements;
        while(num != 0){
            elements.push_back(num % 10);
            num /= 10;
        }
        reverse(elements.begin(), elements.end());

        for(int i = 0; i < elements.size(); i++){
            // cout << elements[i] << endl;
            bool even = false;
            int swapIdx = i;
            int currMax = elements[i];
            if (elements[i] % 2 == 0){
                even = true;
            }
            for(int j = i; j < elements.size(); j++){
                if(elements[j] % 2 == 0 and even and currMax < elements[j]){
                    currMax = elements[j];
                    swapIdx = j;
                }else if (elements[j] % 2 == 1 and !even and currMax < elements[j])
                {
                    currMax = elements[j];
                    swapIdx = j;
                }
                
            }
            printf("swapping %d and %d, at index %d and %d\n", elements[i], elements[swapIdx], i, swapIdx);
            elements[swapIdx] = elements[i];
            elements[i] = currMax;
        }
        int ret = 0;
        for(int i = 0; i < elements.size(); i++){
            ret += elements[i] * pow(10, elements.size() - i - 1);
        }
        return ret;
    }
};

int main(int argc, char const *argv[])
{
    int val = 1234;
    Solution sol = Solution();
    cout << sol.largestInteger(val) << endl;
    return 0;
}
