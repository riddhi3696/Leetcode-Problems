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
 int amountOfTime(TreeNode* root, int start) 
{
   set<TreeNode*>visited;
   unordered_map<int,TreeNode*>mp;
     
   TreeNode* startnode=NULL;
   
   fillmap(root,mp,startnode,start);
     
   return bfs(visited,mp,startnode);
   
}
int bfs(set<TreeNode*>&visited,unordered_map<int,TreeNode*>&mp,TreeNode* startnode)
{
	queue<TreeNode*>q;
    int time=0;
    q.push(startnode);
    
    while(!q.empty())
    {
    	int size=q.size();
        
    	for(int i=0;i<size;i++)
    	{
    		TreeNode* temp=q.front();
    		q.pop();
    		visited.insert(temp);
    		
    		//left and right and parent
    		if(temp->left!=NULL and visited.find(temp->left)==visited.end())
    		{
		       q.push(temp->left);
			}
			if(temp->right!=NULL and visited.find(temp->right)==visited.end())
    		{
    			q.push(temp->right);
			}
			if(mp.find(temp->val)!=mp.end() and visited.find(mp[temp->val])==visited.end())
    		{
    			q.push(mp[temp->val]);
			}
		}
        if(q.size()>0)
		time++;
	}
	return time;
}
void fillmap(TreeNode* root,unordered_map<int,TreeNode*>&mp,TreeNode* &startnode,int start)
{
	if(root==NULL)  
	{
	   return;	
	}
	if(root->val==start and startnode==NULL)
	{
		startnode=root;
	}
	if((root->left)!=NULL)
	{
		mp[root->left->val]=root;
	}
	if((root->right)!=NULL)
	{
		mp[root->right->val]=root;
	}
	fillmap(root->left,mp,startnode,start);
	fillmap(root->right,mp,startnode,start);
}
};
