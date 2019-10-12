/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        long x2 = x;
        int res = 1;
        for(long i = 0;i<=x2 ;i++){
            if (i*i<=x2){
                res = i;
            } else{
                return res;
            }
        }
        return res;
    }
};
// @lc code=end

