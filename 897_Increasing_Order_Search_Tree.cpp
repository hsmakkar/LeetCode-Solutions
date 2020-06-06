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
void inorder(TreeNode *root,vector<int>&v)
{
    if(!root)
        return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        if(v.size()==0)
            return NULL;
        TreeNode *r=new TreeNode(v[0]);
        if(v.size()==1)
            return r;
        TreeNode *tmp=r;
        int i;
        for(i=1;i<v.size();i++)
        {
            TreeNode *n=new TreeNode(v[i]);
            tmp->right=n;
            tmp=n;
        }
        return r;
    }
};
