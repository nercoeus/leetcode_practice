/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> res;
        if (root == NULL)
        {
            return res;
        }
        string k = to_string(root->val);
        if (!root->left && !root->right)
        {
            res.insert(res.end(), k);
            return res;
        }
        vector<string> t = binaryTreePaths(root->left);
        for (int i = 0; i < t.size(); i++)
        {
            res.insert(res.end(), k + "->" + t[i]);
        }
        t = binaryTreePaths(root->right);
        for (int i = 0; i < t.size(); i++)
        {
            res.insert(res.end(), k + "->" + t[i]);
        }
        return res;
    }
};
// @lc code=end
