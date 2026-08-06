class Solution {
public:
    int sizeoflinkedlist(ListNode *head)
    {
        ListNode *p = head;
        int count = 0;

        while (p != NULL)
        {
            count++;
            p = p->next;
        }

        return count;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if (head == NULL)
        {
            return NULL;
        }

        int size = sizeoflinkedlist(head);
        int diff = size - n;
        if(size==1){
        return NULL;
    }

        if (diff == 0)
        {
            ListNode *p = head;
          head= head->next;
            delete p;
            return head;
        }
        else
        {
            ListNode *p = head;
            ListNode *q = head->next;
            ListNode *temp = NULL;

            int i = size - 1;

            while (i != n)
            {
                p = p->next;
                q = q->next;
                i--;
            }

            temp = q;
            p->next = q->next;
            delete temp;

            return head;
        }
    }
};