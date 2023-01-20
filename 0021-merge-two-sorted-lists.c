/**
 * You are given the heads of two sorted linked lists list1 and list2.
 *
 * Merge the two lists in a one sorted list. The list should be made by splicing
 * together the nodes of the first two lists.
 *
 * Return the head of the merged linked list.
 *
 * Space: O(n)
 * Time: O(n)
 */

#include <stdio.h>
#include <stdbool.h>

/* Definition for singly-linked list. */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if (!list1)
        return list2;
    else if (!list2)
        return list1;

    struct ListNode *root = NULL;

    if (list1->val < list2->val) {
        root = list1;
        list1 = list1->next;
    } else {
        root = list2;
        list2 = list2->next;
    }

    struct ListNode *temp = root;

    while (true) {
        if (!list1) {
            temp->next = list2;
            break;
        } else if (!list2) {
            temp->next = list1;
            break;
        }

        if (list1->val < list2->val) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }

        temp = temp->next;
    }

    return root;
}
