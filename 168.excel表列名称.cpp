/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution
{
public:
    string convertToTitle(int n)
    {
        string res = "";
        while (n > 0)
        {
            n--;
            int k = n / 26;
            int l = n % 26;
            n = k;
            char t = 'A' + l;
            res = t + res;
        }
        return res;
    }
};
// @lc code=end
