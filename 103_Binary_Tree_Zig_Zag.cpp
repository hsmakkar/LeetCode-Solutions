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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int>v;
        vector<vector<int>>v1;
        if(!root)
            return vector<vector<int>>();
        queue<TreeNode*>q;
        q.push(root);
        int lev=1;
        int nc;
        while(1)
        {
            nc=q.size();
            if(nc==0)
                break;
            while(nc>0)
            {
                TreeNode *tmp=q.front();
                v.push_back(tmp->val);
                q.pop();
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                nc--;
            }
            if(lev%2==0)
                reverse(v.begin(),v.end());
            v1.push_back(v);
            v.clear();
            lev++;
        }
        return v1;
        
    }
};
