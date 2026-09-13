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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* pre=NULL;
        ListNode* curr=slow;
        ListNode* last;
        while(curr!=NULL)
        {
            last=curr->next;
            curr->next=pre;
            pre=curr;
            curr=last;
        }
        ListNode* y=head;
        ListNode* m=pre;
        while(m!=NULL)
        {
            if(y->val!=m->val)
            {
                return false;
            }
            y=y->next;
            m=m->next;
        }
        return true;
    }
};