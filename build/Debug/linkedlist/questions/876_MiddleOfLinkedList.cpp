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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int c=0,middle=1;
        if(head==NULL)
        return NULL;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int currpos=1;
        if(c%2==0)
        {
            middle=c/2+1;
            while(currpos<middle)
            {
                currpos++;
                head=head->next;
            }

        }
        else
        {
            middle=c/2+1;
            while(currpos<middle)
            {
                head=head->next;
                currpos++;
            }
        }
        return head;

    }
};