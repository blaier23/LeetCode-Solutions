// Given a 32-bit signed integer, reverse digits of an integer.

#include <limits>

class Solution {
public:
    int reverse(int x) {
        int digit;
        long result = 0;
        
        while(x)
        {
            digit = x % 10;
            result = result * 10 + digit;
            if(INT_MAX < result || result <  INT_MIN)
                return 0;

            x = x / 10;
        }
        
        return result;
    }
};
