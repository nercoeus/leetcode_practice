/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        for (long long i = 5; n / i; i *= 5)
            count += n / i;
        return count;
    }
};
// @lc code=end

