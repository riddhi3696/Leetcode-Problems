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
    bool isPalindrome(ListNode* head) {
        if(head==NULL){return false;}
        if(head->next==NULL){return true;}
        ListNode* temp=head;
        int c=0;
        int a=0;
        stack<int> st;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            a++;
            if(a<=c/2){
              st.push(temp->val);
            }
            else{
                if(st.top()!=temp->val){
                    return false;
                }
                else{st.pop();}
            }
            if(c%2==1 && a==c/2){temp=temp->next; a++;}
            temp=temp->next; 
        }
        return true;
    }
};
