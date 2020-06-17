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
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        inorder(root,v);
        int l=0;int r=v.size()-1;
        while(l<r)
        {
            int s=v[l]+v[r];
            if(s==k)
                return true;
            
            if(s>k)
                r--;
            else
                l++;
        }
        return false;
    }
};
