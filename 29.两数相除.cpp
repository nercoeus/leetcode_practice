/*
 * @lc app=leetcode.cn id=29 lang=cpp
 *
 * [29] 两数相除
 */

// @lc code=start
class Solution
{
#define INT_MAX 0X7FFFFFFF
#define INT_MIN 0X80000000
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        uint32_t temp1 = abs(dividend);
        uint32_t temp2 = abs(divisor);
        if (temp1 < temp2)
            return 0;

        int flag = 1;
        if ((dividend & divisor & INT_MIN) == 0 && (dividend < 0 || divisor < 0))
            flag = -1;

        int i = 1, last_i = 0;
        uint32_t d = temp2;

        if (d == 1)
            i = temp1;
        else
        {
            while (temp1 > d)
            {
                d <<= 1;
                i <<= 1;
            }

            if (temp1 < d)
                i = (i >> 1) + divide(temp1 - (d >> 1), temp2);
        }

        if (flag < 0)
            i = -i;

        return i;
    }
};
// @lc code=end
