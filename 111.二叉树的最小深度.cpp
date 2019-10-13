/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        else
        {
            int t1 = minDepth(root->left);
            int t2 = minDepth(root->right);
            int res;
            if(t1 == 0){
                res = t2;
            } else if(t2 == 0){
                res = t1;
            } else{
                res = min(t1,t2);
            }
            return res + 1;
        }
    }
};
// @lc code=end
