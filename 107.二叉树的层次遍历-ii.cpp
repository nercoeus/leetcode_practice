/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<vector<int> > res;
    void sss(TreeNode* root, int k){
        if (root == nullptr){
            return;
        } else{
            if(res.size() <= k){
                vector<int> t;
                res.insert(res.end(), t);
            }
            res[k].insert(res[k].end(), root->val);
        }
        sss(root->left, k+1);
        sss(root->right, k+1);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        sss(root, 0);
        vector<vector<int> > e;
        for(int i = res.size()-1;i>=0;i--){
            e.insert(e.end(), res[i]);
        }
        return e;
    }
};
// @lc code=end

