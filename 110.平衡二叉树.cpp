/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
#include<iostream>
using namespace std;
class Solution {
public:
    int sss(TreeNode* root, bool& flag){
        flag = true;
        if(root == nullptr){
            return 0;
        } else{
            bool flag1;
            bool flag2;
            int t1 = sss(root->left,flag1);
            int t2 = sss(root->right,flag2);
            flag = flag1 && flag2 &&(max(t1,t2)-min(t1,t2)<=1);
            cout<<flag<<" "<<t1<<" "<<t2<<endl;
            return max(t1,t2) +1;
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        } else{
            bool flag1;
            bool flag2;
            int t1 = sss(root->left,flag1);
            int t2 = sss(root->right,flag2);
            return flag1 && flag2 &&(max(t1,t2)-min(t1,t2)<=1);
        }

    }
};
// @lc code=end

