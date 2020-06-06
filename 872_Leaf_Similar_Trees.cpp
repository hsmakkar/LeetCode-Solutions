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
void leaf(TreeNode *root,vector<int>&v)
{
    if(!root)
        return;
    leaf(root->left,v);
    if(root->left==NULL && root->right==NULL)
        v.push_back(root->val);
    leaf(root->right,v);
}
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v,v1;
        leaf(root1,v);
        leaf(root2,v1);
        if(v.size()!=v1.size())
            return false;
        int i;
        for(i=0;i<v.size();i++)
        {
            if(v[i]!=v1[i])
                return false;
        }
        return true;
    }
};
