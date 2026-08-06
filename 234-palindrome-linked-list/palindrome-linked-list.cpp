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

class Solution
{
public:
    ListNode *reverse_linkedlist(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode *p = head;

        if (head == NULL || head->next == NULL)
        {
            return true;
        }

        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        // Odd length: skip the middle node
        if (fast != NULL)
        {
            slow = slow->next;
        }

        slow = reverse_linkedlist(slow);

        while (slow != NULL)
        {
            if (slow->val != p->val)
            {
                return false;
            }

            slow = slow->next;
            p = p->next;
        }

        return true;
    }
};