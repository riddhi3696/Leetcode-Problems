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
    ListNode* middleNode(ListNode*head){
        ListNode* node=head;
        int c=0;
        int m=0;
        while(node!=NULL){
            node=node->next;
            c++;
        }
        cout<<c;
        node=head;
        while(node!=NULL){
            if(m==c/2){
            return node;
            }
            m++;
            node=node->next;
        }
        return node;
    
    }
};
