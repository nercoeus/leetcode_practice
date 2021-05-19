/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* pr = head;
        int value = 0;
        ListNode* temp = new ListNode(0);
        while(l1 != nullptr || l2 != nullptr) {
            if (l1 == nullptr) {
                l1 = temp;
            }
            if (l2 == nullptr) {
                l2 = temp;
            }
            value = (l1->val + l2->val + value);
            ListNode* next = new ListNode(value%10);
            value /= 10;
            pr->next = next;
            pr = pr->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(value != 0) {
            ListNode* next = new ListNode(value);
            pr->next = next;
            pr = next;
        }
        return head->next;
    }

    ListNode* addTwoNumbersBk(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* pr = head;
        int value = 0;
        while(l1 != nullptr || l2 != nullptr) {
            if (l1 == nullptr) {
                value = (l2->val + value);
                l2->val = value%10;
                value /= 10;
                pr->next = l2;
                pr = pr->next;
                l2 = l2->next;
                continue;
            }
            if (l2 == nullptr) {
                value = (l1->val + value);
                l1->val = value%10;
                value /= 10;
                pr->next = l1;
                pr = pr->next;
                l1 = l1->next;
                continue;
            }
            value = (l1->val + l2->val + value);
            l2->val = value%10;
            value /= 10;
            pr->next = l2;
            pr = pr->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(value != 0) {
            ListNode* next = new ListNode(value);
            pr->next = next;
            pr = next;
        }
        return head->next;
    }
};