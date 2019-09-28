/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res;
        if (strs.size() == 0)
        {
            return "";
        }
        int min = strs[0].size();
        for (int i = 0; i < strs.size(); i++)
        {
            min = min > strs[i].size() ? strs[i].size() : min;
        }
        cout << min << endl;
        for (int i = 0; i < min; i++)
        {
            char t = strs[0][i];
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != t)
                {
                    return res;
                }
            }
            res += t;
        }
        return res;
    }
};
