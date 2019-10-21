/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while(n){
            n &= (n-1);
            res++;
        }
        return res;
    }
};
// @lc code=end

