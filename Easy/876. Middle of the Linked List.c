/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.



Example 1:

Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode ListNode;

struct ListNode* middleNode(struct ListNode* head){
    ListNode *mid = head;
    ListNode *end = head;

    while (end != NULL && end->next != NULL) {
        mid = mid->next;
        end = end->next->next;
    }

    return mid;
}
