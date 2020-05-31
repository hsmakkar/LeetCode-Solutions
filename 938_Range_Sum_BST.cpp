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
    int rangeSumBST(TreeNode* root, int l, int r) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
        {
            if(root->val>=l && root->val<=r)
                return root->val;
            else
                return 0;
        }
        if(root->val>=l&&root->val<=r)
        {
            return root->val+rangeSumBST(root->right,l,r)+rangeSumBST(root->left,l,r);
        }
        else if(root->val>r)
            return rangeSumBST(root->left,l,r);
        else
            return rangeSumBST(root->right,l,r);
        
    }
};
