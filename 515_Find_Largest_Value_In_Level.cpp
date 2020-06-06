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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root)
            return vector<int>();
        q.push(root);
        vector<int>v;
        int mx,nc;
        while(1)
        {
            mx=INT_MIN;
            nc=q.size();
            if(nc==0)
                break;
            while(nc>0)
            {
                TreeNode *tmp=q.front();
                if(tmp->val>mx)
                    mx=tmp->val;
                q.pop();
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                nc--;
            }
            v.push_back(mx);
        }
        return v;
        
    }
};
