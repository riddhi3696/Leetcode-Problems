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
    bool hasCycle(ListNode *head) {
         ListNode* t=head;
         ListNode* p=head;
         while(t!=NULL && t->next!=NULL){
             p=p->next;
             t=t->next->next;
             if(p==t){ return true;}
         }
         
         return false;
    }
};
