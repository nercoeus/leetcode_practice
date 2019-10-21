/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
using namespace std;
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode* h1 = headA;
        ListNode* h2 = headB;
        int l1 = 0, l2 = 0;
        while(h1 != NULL){
            l1++;
            h1 = h1->next;
        }
        while(h2 != NULL){
            l2++;
            h2 = h2->next;
        }
        int diff = std::abs(l1-l2);
        if(l1 < l2){ swap(headA, headB);}
        while(diff > 0){
            headA = headA->next;
            diff--;
        }
        while(headB != headA){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};
// @lc code=end
