/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int t = m - 1;
        int b = n - 1;
        int i = m + n - 1;

        while (t >= 0 && b >= 0)
        {
            if (nums1[t] >= nums2[b])
            {
                nums1[i--] = nums1[t--];
            }
            else
            {
                nums1[i--] = nums2[b--];
            }
        }

        while (t >= 0)
        {
            nums1[i--] = nums1[t--];
        }

        while (b >= 0)
        {
            nums1[i--] = nums2[b--];
        }
    }
};
// @lc code=end
