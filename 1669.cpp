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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p=list1;
        ListNode* r=list1;
        long long c=0;
        while(r!=NULL){
            c++;
            if(c<a){
            p=p->next;
            }
            if(c==b){
                r=r->next;
                break;
            }
            r=r->next;
        }
        p->next=list2;
        ListNode* temp=list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=r->next;
        return list1;
        }
};
