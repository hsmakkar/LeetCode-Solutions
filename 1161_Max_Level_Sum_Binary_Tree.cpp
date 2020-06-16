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
    int maxLevelSum(TreeNode* root) {
        int mx=INT_MIN;
        int lev=1;
        int nc=0;
        int p;
        queue<TreeNode*>q;
        q.push(root);
        int s;
        while(1)
        {
            s=0;
            nc=q.size();
            if(nc==0)
                break;
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
            if(s>mx)
            {
                mx=s;
                p=lev;
            }
            lev++;
        }
        return p;
            
    }
};
