/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    // Your runtime beats 80.41 % of cpp submissions
    // Your memory usage beats 27.41 % of cpp submissions (8.5 MB)
    vector<int> getRow(int rowIndex)
    {
        rowIndex++;
        vector<int> res;
        for (int i = 0; i < rowIndex; i++)
        {
            vector<int> t(i + 1);
            t[0] = 1;
            t[i] = 1;
            for (int j = 1; j <= i / 2; j++)
            {
                t[j] = t[i - j] = res[j - 1] + res[j];
            }
            res = t;
        }
        return res;
    }
    // Your runtime beats 80.41 % of cpp submissions
    // Your memory usage beats 94.08 % of cpp submissions (8.2 MB)
    vector<int> getRow(int rowIndex) {
        rowIndex++;
        vector<int> res;
        for (int i = 0; i < rowIndex; i++)
        {
            res.insert(res.end(), 1);
            int s1 = res[0];
            int s;
            for (int j = 1; j <= i/2; j++)
            {
                s = res[j];
                res[j] = res[i-j] =s1 + s;
                s1 = s;
            }
        }
        return res;
    }
};
// @lc code=end
