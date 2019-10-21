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
#include <stack>
using namespace std;
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode* h1 = headA;
        ListNode* h2 = headB;
        stack<ListNode*> s1;
        stack<ListNode*> s2;
        while(h1 != NULL){
            s1.push(h1);
            h1 = h1->next;
        }
        while(h2 != NULL){
            s2.push(h2);
            h2 = h2->next;
        }
        ListNode* res = NULL;
        while(!s1.empty() && !s2.empty()){
            if (s1.top() == s2.top()){
                res = s1.top();
                s1.pop();
                s2.pop();
            } else{
                break;
            }
        }
        return res;
    }
};
// @lc code=end
