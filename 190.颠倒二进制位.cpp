/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
    char tb[16] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
public:
    uint32_t reverseBits(uint32_t n) {
        int cur = 0;
        uint32_t ret = 0;
        uint32_t msk = 0xF;
        // 四位四位的进行操作
        for(int i = 0;i<8;i++){
            ret = ret<<4;
            cur = msk&n;
            ret |= tb[cur];
            n = n >> 4;
        }
        return ret;
    }
};
// @lc code=end