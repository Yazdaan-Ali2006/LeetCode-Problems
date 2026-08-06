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
int sizeoflinkedlist(ListNode* head) {
    int i = 1;
    ListNode* p = head;
    while (p->next!= NULL) {
        p = p->next;
        i++;
    }
    return i;
}
int power(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * power(a, b - 1);
    }
}
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int num = 0;
        int size = sizeoflinkedlist(head);

        ListNode* p = head;
        while (p != NULL) {
            num += p->val * power(2, size-1);
            p = p->next;
            size--;
        }
        return num;
    }
};