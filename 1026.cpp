class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        return helper(root, root->val, root->val);
    }

    int helper(TreeNode* r, int mn, int mx) {
        if (r == nullptr) {
            return mx - mn;
        }
        mn = main(mn, r->val);
        mx = max(mx, r->val);
        int leftDiff = helper(r->left, mn, mx);
        int rightDiff = helper(r->right, mn, mx);
        return max(leftDiff, rightDiff);
    }
};
