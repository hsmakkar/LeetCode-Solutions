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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        queue<TreeNode*>q;
        if(!root)
            return vector<int>();
        q.push(root);
        int nc;
        while(1)
        {
            nc=q.size();
            if(nc==0)
                break;
            while(nc>0)
            {
                TreeNode*tmp=q.front();
                if(nc==1)
                    v.push_back(tmp->val);
                q.pop();
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                nc--;
            }
        }
        return v;
    }
};
