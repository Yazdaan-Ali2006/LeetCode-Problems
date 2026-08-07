
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        int i = 0;
        ListNode* p = head;
        ListNode* q = head->next;
        ListNode* r = q->next;
        ListNode* prev = NULL;

        while (q != NULL) {
            p->next = r;
            q->next = p;

            if (i == 0) {
                head = q;
                i++;
            }

            prev = p;

            p = r;

            if (p == NULL) {
                break;
            }

            q = p->next;

            if (q == NULL) {
                break;
            }

            r = q->next;
            prev->next = q;
        }

        return head;
    }
};
