int gcd(int a, int b) {
    int rem;
    while (1) {
        rem = a % b;
        if (rem == 0) {
            return b;
        }
        else {
            a = b;
            b = rem;
        }
    }
}

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* p = head;
        ListNode* q = head->next;

       
        ListNode* temp = new ListNode;

        while (q != NULL) 
        {    ListNode* node = new ListNode;
            node->val = gcd(p->val, q->val);
            temp = p->next;
            p->next = node;
            node->next = q;
            p = p->next->next;
            q = q->next;}
     

        return head;
    }
};