class Solution {
public:
    int sizeoflinkedlist(ListNode* head) {
        ListNode* p = head;
        int i = 0;

        while (p != NULL) {
            p = p->next;
            i++;
        }

        return i;
    }

    ListNode* deleteMiddle(ListNode* head) {
        int num = sizeoflinkedlist(head);
        int mid = num / 2;
        int i = 0;

        ListNode* temp;
        ListNode* p = head;
        ListNode* q = head->next;

        while (i < mid - 1) {
            p = p->next;
            q = q->next;
            i++;
        }
       if(q!=NULL){
        temp = q;
    
        p->next = q->next;
        delete temp;

        return head;}
        return NULL;
    }
};