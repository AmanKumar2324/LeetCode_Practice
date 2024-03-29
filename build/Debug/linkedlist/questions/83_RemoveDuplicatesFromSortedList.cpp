/*83. Remove Duplicates from Sorted List
Solved
Easy
Topics
Companies
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.*/

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
        if(head==NULL || head->next==NULL)
        return head;

        ListNode* current=head;
        while(current!=NULL && current->next!=NULL)
        {
            if(current->val == current->next->val)
            {
                ListNode* delnode=current->next;
                current->next=delnode->next;
                delete(delnode);
            }
            else
            {
                current=current->next;
            }


        }
        return head;
        
    }
};