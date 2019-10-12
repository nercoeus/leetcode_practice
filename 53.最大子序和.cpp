/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution
{
public:
    // 遍历法
    int maxSubArray(vector<int> &nums)
    {
        int res = 0;
        int res2 = __INT_MAX__ + 1;
        cout << res2 << endl;
        for (int i = 0; i < nums.size(); i++)
        {
            res += nums[i];
            res2 = res > res2 ? res : res2;
            if (res < 0)
            {
                res = 0;
            }
        }
        return res2;
    }
    // 分治法
    void maxSubArray2(vector<int> &nums, int l, int r, int &mx, int &lmx, int &rmx, int &sum)
    {
        if (l == r)
        {
            mx = lmx = rmx = sum = nums[l];
        }
        else
        {
            int m = (l + r) / 2;
            int mx1, l1, r1, sum1;
            int mx2, l2, r2, sum2;
            maxSubArray2(nums, l, m, mx1, l1, r1, sum1);
            maxSubArray2(nums, m + 1, r, mx2, l2, r2, sum2);
            mx = max(max(mx1, mx2), r1 + l2);
            lmx = max(sum1 + l2, l1);
            rmx = max(sum2 + r1, r2);
            sum = sum1 + sum2;
        }
    }
    int maxSubArray(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        int mx, lmx, rmx, sum;
        maxSubArray2(nums, 0, nums.size() - 1, mx, lmx, rmx, sum);
        return mx;
    }
};
// @lc code=end
