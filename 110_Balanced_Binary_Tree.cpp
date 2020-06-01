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
    int height(TreeNode *root)
    {
        if(!root)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        int l=height(root->left);
        int r=height(root->right);
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        int hl=height(root->left);
        int hr=height(root->right);
        if(abs(hl-hr)<=1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        else
            return false;
    }
};
