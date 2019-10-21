/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        while(n > 0){
            if(n == 1) return true;
            if(n % 2 != 0){
                return false;
            }
            n = n/2;
        }
        return false;
    }
};
// @lc code=end

