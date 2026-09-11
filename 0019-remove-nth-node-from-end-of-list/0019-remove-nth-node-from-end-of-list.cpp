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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(n==count)
        {
            ListNode* p=head;
            head=head->next;
            delete p;
            return head;
            
        }
        int res=count-n;
        int i=1;
        ListNode* ptr=head;
        while(i<res)
        {
            ptr=ptr->next;
            i++;
        }
        ListNode* del=ptr->next;
        ptr->next=ptr->next->next;
        delete del;
        return head;

    }
};