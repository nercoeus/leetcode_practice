/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int d = 0;
        ListNode* res = l1;
        while(l1 != NULL && l2 != NULL){
            d = d + l1->val + l2->val;
            l1->val = d%10;
            d = d/10;
            if(l1->next == NULL && d != 0){
                l1->next = new ListNode(d);
                d = 0;
                swap(l1->next, l2->next);
            }
            if(l1->next == NULL){
                swap(l1->next, l2->next);
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            d = d + l1->val;
            l1->val = d%10;
            d = d/10;
            if(l1->next == NULL && d != 0){
                l1->next = new ListNode(d);
                d = 0;
            }
            l1 = l1->next;
        }
        return res;
    }
};
// @lc code=end

