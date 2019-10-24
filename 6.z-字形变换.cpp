/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
#include<iostream>
using namespace std;
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (s.size() <= 2 || numRows ==1)
            return s;
        string res = "";
        int len = numRows * 2 - 2;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = i; j < s.size();)
            {
                if (i == 0 || i == numRows - 1)
                {
                    res += s[j];
                }
                else
                {
                    res+=s[j];
                    if(len+j-2*(j%len) <s.size()){
                        res+=s[len+j-2*(j%len)];
                        cout<<s[len+j-2*(j%len)];
                    }
                }
                j += len;
            }
        }
        return res;
    }
};
// @lc code=end
