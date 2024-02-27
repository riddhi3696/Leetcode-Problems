/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {

        vector <int> ans;
        stack <TreeNode*> st;
        st.push(root);
        TreeNode* node= root;
        
        if(node==NULL){
            return 0;
        }

        while(!st.empty()){
            int c=0;
            if(node!=NULL){
                c++;
                node=node->left;
                st.push(node);
            }
            else{
                ans.push_back(c);
                c--;
                st.pop();
                node=st.top();
                if(node->right!=NULL){
                    node=node->right;
                    st.push(node);
                    c++;
                }
                else{
                    st.pop();
                    c--;
                }
            }
        }
        int max=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]>max){
                max=ans[i];
                }
            }

        return max;

    }
};
