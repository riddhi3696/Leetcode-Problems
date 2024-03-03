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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = head;
        ListNode* p = head;

        int i=0;
        int k;
        int c=0;

        if(head->next==NULL && n==1){
            return NULL;
        }

        while(t!=NULL){
            t=t->next;
            c++;
        }

        t=head;
        k=c-n;

        if(k==0){
            return head->next;
        }

        while(t!=NULL){
            t=t->next;
            i++;
            if(i==k){
                p->next=t->next;
                t->next=NULL;
            }
            else{
              p=p->next;
            }
        }
        return head;
    }
};
