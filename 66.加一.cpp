/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int flag = 0;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                flag = 1;
                digits[i] = 0;
            }
            else
            {
                digits[i] = digits[i] + 1;
                flag = 0;
                break;
            }
        }
        if (flag){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
// @lc code=end
