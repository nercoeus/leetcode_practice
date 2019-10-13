/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    TreeNode *sss(vector<int> &nums, int l, int r)
    {
        if (l >= r){
            return nullptr;
        }
        int m = (l + r) / 2;
        TreeNode* res = new TreeNode(nums[m]);
        res->left = sss(nums, l,m);
        res->right = sss(nums, m+1,r);
        return res;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return sss(nums, 0, nums.size());
    }
};
// @lc code=end
//0,5, 2
// 0, 2 / 3,5
// 0,1,2 /3,4,5
// 0,0,1/2,2/3,3,4/5,5