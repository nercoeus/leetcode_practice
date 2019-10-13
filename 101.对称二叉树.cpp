/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p != nullptr && q != nullptr)
        {
            return p->val == q->val && isSameTree(p->left, q->right) && isSameTree(p->right, q->left);
        }
        return p == q;
    }
    bool isSymmetric(TreeNode *root)
    {
        if(root != nullptr){
            return isSameTree(root->right,root->left);
        }
        return true;
    }
};
// @lc code=end
