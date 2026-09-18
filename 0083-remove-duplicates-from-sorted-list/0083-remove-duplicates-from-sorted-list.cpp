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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            ListNode* nex=temp->next;
            while(nex!=NULL && nex->val==temp->val)
            {
                ListNode* dd=nex;
                nex=nex->next;
                delete(dd);
            }
            temp->next=nex;
            temp=temp->next;
        }
        return head;
    }
};