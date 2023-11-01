/*234. Palindrome Linked List
Solved
Easy
Topics
Companies
Given the head of a singly linked list, return true if it is a 
palindrome
 or false otherwise.*/

 class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        // Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the linked list
        slow->next = reverseLinkedList(slow->next);

        // Compare the first half with the reversed second half
        slow = slow->next;
        while (slow != nullptr) {
            if (head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }

        return true;
    }

    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* pre = nullptr;
        ListNode* next = nullptr;
        while (head != nullptr) {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
};
