/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include <vector>
#include<iostream>
using namespace std;
class Solution
{
public:
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > res;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> t(i+1);
            t[0] = 1;
            t[i] = 1;
            for (int j = 1; j <= i/2; j++)
            {
                t[j] = t[i-j] = res[i-1][j-1] + res[i-1][j];
            }
            res.insert(res.end(), t);
        }
        return res;
    }
};

// @lc code=end
