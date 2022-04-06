#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/**
 * @brief 
 * Runtime: 20 ms
 * Memory Usage: 18.3 MB
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ret = 0;
        int size = nums.size();
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] == nums[i - 1])
            {
                ret++;
                nums.erase(nums.begin() + i);
            }
        }
        // for (int i = 0; i < size - ret; i++)
        // {
        //     printf("%i, ", nums[i]);
        // }
        // cout << endl;
        
        return size - ret;
    }
};

int main()
{
    Solution solution = Solution();
    vector<int> v{1, 1, 2};
    solution.removeDuplicates(v);
    return 0;
}
