/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
#include <iostream>
using namespace std;
class Solution
{
public:
    int myAtoi(string str)
    {
        long result = 0;
        int indicator = 1;
        {
            int i = str.find_first_not_of(' ');
            if (i<str.size()&&(str[i] == '-' || str[i] == '+'))
            {
                indicator = str[i++] == '-' ? -1 : 1;
            }
            while (i<str.size() && '0' <= str[i] && str[i] <= '9')
            {
                result = result * 10 + (str[i++] - '0');
                if (result * indicator >= INT_MAX)
                    return INT_MAX;
                if (result * indicator <= INT_MIN)
                    return INT_MIN;
            }
        }
        return result * indicator;
    }
};
// @lc code=end
