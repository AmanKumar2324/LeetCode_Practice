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
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        if(c==n)
        {
            ListNode* newhead=head;
            head=newhead->next;
            delete newhead;
            return head;
        }
        int del=c-n;
        int curr_pos=1;
        ListNode* t=head;
        while(curr_pos!=del){
            curr_pos++;
            t=t->next;
        }
        ListNode* deletenode=t->next;
        t->next=deletenode->next;
        delete deletenode;
        return head;

        
    }
};