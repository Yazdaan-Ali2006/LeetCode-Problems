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

    int sizeoflinkedlist(ListNode *head)
    {
        ListNode *p = head;
        int i = 0;
        while (p != NULL)
        {
            p = p->next;
            i++;
        }
        return i;
    }

    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *q = head;
        ListNode *p = head->next;

        int size = sizeoflinkedlist(head);

        if (k % size == 0)
        {
            return head;
        }
        else

        {   //for the sake of time limit
            k=k%size;
            for (int i = 0; i < k; i++)
            {
                while (p->next != NULL)
                {
                    q = q->next;
                    p = p->next;
                }

                q->next = NULL;
                p->next = head;
                head = p;
                q = p;
                p = p->next;
            }

            return head;
        }
    }
};