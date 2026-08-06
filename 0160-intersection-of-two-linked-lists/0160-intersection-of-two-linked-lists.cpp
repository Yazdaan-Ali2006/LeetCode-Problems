/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
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

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL || headB == NULL)
        {
            return NULL;
        }

        int size1 = sizeoflinkedlist(headA);
        int size2 = sizeoflinkedlist(headB);
        int diff;

        if (size1 > size2)
        {
            diff = size1 - size2;
        }
        else if (size2 > size1)
        {
            diff = size2 - size1;
        }
        else
        {
            diff = 0;
        }

        if (diff == 0)
        {
            ListNode *p = headA;
            ListNode *q = headB;

            while (p != q)
            {
                if (p == NULL || q == NULL)
                {
                    return NULL;
                }

                p = p->next;
                q = q->next;
            }

            return p;
        }
        else if (size1 > size2)
        {
            ListNode *p = headA;
            ListNode *q = headB;

            int i = 0;
            while (i != diff)
            {
                i++;
                p = p->next;
            }

            while (p != q)
            {
                if (p == NULL || q == NULL)
                {
                    return NULL;
                }

                p = p->next;
                q = q->next;
            }

            return p;
        }
        else
        {
            ListNode *p = headA;
            ListNode *q = headB;

            int i = 0;
            while (i != diff)
            {
                i++;
                q = q->next;
            }

            while (p != q)
            {
                if (p == NULL || q == NULL)
                {
                    return NULL;
                }

                p = p->next;
                q = q->next;
            }

            return p;
        }
    }
};