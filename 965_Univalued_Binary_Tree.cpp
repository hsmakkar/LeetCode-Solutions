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
bool check(TreeNode *root,int val)
{
    if(!root)
        return true;
    if(root->val!=val)
        return false;
    else
        return (true && check(root->left,val) && check(root->right,val));
}
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(!root)
            return true;
        int c=root->val;
        
        return (check(root->left,c) && check(root->right,c));
    }
};
