/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        int j = 1;
        int res = 1;
        for(int i = 1;i<n;i++){
            int t = res;
            res = res+ j;
            j = t;
        }
        return res;
    }
};
// @lc code=end

