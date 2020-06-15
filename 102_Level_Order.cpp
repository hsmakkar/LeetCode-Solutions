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
int height(TreeNode *root)
{
    if(!root)
        return 0;
    if(root->left==NULL &&root->right==NULL)
        return 1;
    int l=height(root->left);
    int r=height(root->right);
    return 1+max(l,r);
}
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *>q;
        int h=height(root);
        int nc=0;
        if(!root)
            return vector<vector<int>>();
        vector<vector<int>>v(h);
        q.push(root);
        int p=0;
        while(1)
        {
            nc=q.size();
            if(nc==0)
                break;
            while(nc>0)
            {
                TreeNode *tmp=q.front();
                q.pop();
                v[p].push_back(tmp->val);
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                nc--;
            }
            p++;
            
        }
        return v;
    }
};
