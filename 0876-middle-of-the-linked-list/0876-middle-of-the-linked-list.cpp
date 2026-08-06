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
    ListNode* middleNode(ListNode* head) {
           ListNode *ptr1=head;
    ListNode *p= head;
    ListNode *q= head->next;
     if(ptr1->next==NULL){
        return head;
    }
    int i = 0;
    while (ptr1!= NULL)
    {
        ptr1 = ptr1->next;
        i++;
    };
    cout<<i<<endl;
    int size=i/2;
    int j=1;
    while (q!=NULL)
    { 
        if(size==j){
            return  q;
        }
        j++;
        p=p->next;
        q=q->next;
    };
    return q;
    }
};