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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* temp=head;
        ListNode* tail=head;
        int count=0;
        while(tail->next!=NULL)
        {
            count++;
            tail=tail->next;
        }
        int length=count+1;
        if(k%length==0)
        {
            return head;
        }
        k=k%length;
        tail->next=head;
        int i=1;
        while(i!=length-k)
        {
            temp=temp->next;
            i++;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};