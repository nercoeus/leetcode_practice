/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
#include <string>
#include <iostream>
#include<stack>
using namespace std;
class Solution
{
public:
    // int longestValidParentheses(string s)
    // {
    //     int num = 0;
    //     vector<int> kkk = vector<int>(s.size(),0);
    //     for(int i = 1;i<s.size();i++){
    //         if(s[i] == ')' ){
    //             if (s[i-1] == '('){
    //                 kkk[i] = 2 + (i>=2?kkk[i-2]:0);
    //             }else if(i-kkk[i-1] > 0 && s[i-kkk[i-1]-1] == '('){
    //                 kkk[i] = 2+kkk[i-1]+((i-kkk[i-1]-2)>=0?kkk[i-kkk[i-1]-2]:0);
    //             }
    //         }
    //         num = max(num, kkk[i]);
    //     }
    //     return num;
    // }
    int longestValidParentheses(string s)
    {
        int num = 0;
        stack<int> kkk;
        kkk.push(-1);
        int flag = 0;
        for(int i=0;i<s.size();i++){
            if (s[i] == '('){
                kkk.push(i);
            } else{
                kkk.pop();
                if(kkk.empty()){
                    kkk.push(i);
                } else{
                    num = max(num, i-kkk.top());
                }
            }
        }
        return num;
    }
};
// @lc code=end
