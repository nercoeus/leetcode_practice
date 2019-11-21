/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
#include<set>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
     vector<string> generateParenthesis(int n) {
        vector<string> res;
        func(res, "", 0, 0, n);
        return res;
    }
    void func(vector<string> &res, string str, int l, int r, int n){
        if(l > n || r > n || r > l) return ;
        if(l == n && r == n) {res.push_back(str); return;}
        func(res, str + '(', l+1, r, n);
        func(res, str + ')', l, r+1, n);
        return;
    }
};
// @lc code=end

