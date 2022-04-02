#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long copy = x;
        long long rev = 0;
        while (x != 0)
        {
            rev = (rev * 10) + (x % 10);
            x /= 10;
        }
        return (copy == rev);
    }
};