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
    ListNode* deleteMiddle(ListNode* head) {

        //Checking for the edge casees

        if(head==NULL)
        return head;
        else if(head->next==NULL)
        return NULL;

        //checking the other cases

        //counting the number of nodes

        ListNode* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            c++;
        }

        //finding the middle node or the node to delete

        int nodetodel=c/2;

        //getting the node just previous to the node to delete

        ListNode* prevnode=head;
        int currpos=1;
        while(currpos!=nodetodel)
        {
            prevnode=prevnode->next;
            currpos++;
        }
        ListNode* deletenode=prevnode->next;
        prevnode->next=deletenode->next;
        delete deletenode;
        return head;
        
    }
};