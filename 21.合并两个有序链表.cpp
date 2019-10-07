/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode* res = new ListNode(-1);
        ListNode* res2 = res;
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val < l2->val){
                res->next = l1;
                res = l1;
                l1 = l1->next;
            } else{
                res->next = l2;
                res = l2;
                l2 = l2->next;
            }
            cout<<res->val<<endl;
        }
        if (l1 != nullptr){
            res->next = l1;
        }
        if (l2 != nullptr){
            res->next = l2;
        }
        return res2->next;
    }
};
