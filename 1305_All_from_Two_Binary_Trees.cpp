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
void inorder(TreeNode *root,vector<int>&a)
{
    if(!root)
        return;
    inorder(root->left,a);
    a.push_back(root->val);
    inorder(root->right,a);
    
}
class Solution {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        int n=v1.size();
        int m=v2.size();
        vector<int>v3;
        
        int i=0;int j=0;
        while(i<n && j<m)
        {
            if(v1[i]<v2[j])
            {
                v3.push_back(v1[i]);
                i++;
            }
            else
            {
                v3.push_back(v2[j]);
                j++;
            }
        }
        while(i<n)
        {
            v3.push_back(v1[i]);
            i++;
        }
        while(j<m)
        {
            v3.push_back(v2[j]);
            j++;
        }
        return v3;
    }
};
