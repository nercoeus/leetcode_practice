/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution {
public:
    int kkk(int n){
        cout<<n<<endl;
        int res = 0;
        while(n > 0){
            int t = n%10;
            n = n/10;
            res += t*t;
        }
        return res;
    }
    bool isHappy(int n) {
        int w = 6;
        while(w-->0){
            n = kkk(n);
            if(n == 1){
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

