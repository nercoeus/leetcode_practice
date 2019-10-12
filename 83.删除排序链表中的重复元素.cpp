/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode* res = head;
        ListNode* k = head;
        ListNode* t = head;
        if (head == nullptr){
            return head;
        }
        while(k != nullptr && k->next!= nullptr){
            if (k->next->val == k->val){
                k = k->next;
            } else{
                t->next = k->next;
                t = t->next;
                k = k->next;
            }
        }
        t->next = nullptr;
        return res;
    }
};
// @lc code=end
