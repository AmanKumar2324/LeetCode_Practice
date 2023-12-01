/*2807. Insert Greatest Common Divisors in Linked List
Solved
Medium
Topics
Companies
Given the head of a linked list head, in which each node contains an integer value.

Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.

Return the linked list after insertion.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 */

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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* temp=head;
        while(temp->next!=NULL && temp->next!=NULL)
        {
            int buffer=temp->next->val;
            ListNode* eleins=new ListNode(gcd(temp->val,buffer));
            eleins->next=temp->next;
            temp->next=eleins;
            temp=temp->next->next;
        }
        return head;
        
    }

int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
};