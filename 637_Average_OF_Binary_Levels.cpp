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
    vector<double> averageOfLevels(TreeNode* root) {
        int nc;
        long long c,s=0;
        queue<TreeNode*>q;
        if(!root)
            return vector<double>();
        q.push(root);
        vector<double>v;
        while(1)
        {
            nc=q.size();
            if(nc==0)
                break;
            c=nc;s=0;
            while(nc>0)
            {
                TreeNode *tmp=q.front();
                q.pop();
                s+=tmp->val;
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                nc--;
            }
            double d=double(s)/double(c);
            v.push_back(d);
        }
        return v;
        
    }
};
