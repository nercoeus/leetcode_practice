/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0, j = numbers.size() - 1;
        vector<int> res;
        while (i < j)
        {
            if (numbers[i] + numbers[j] == target)
            {
                res.insert(res.begin(), j + 1);
                res.insert(res.begin(), i + 1);
                return res;
            }
            else if (numbers[i] + numbers[j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return res;
    }
};
// @lc code=end
