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
int maxDepth(TreeNode* node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);  
        int rDepth = maxDepth(node->right);  
      
        /* use the larger one */
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }  
}
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int h=maxDepth(root);
        int lev=1;
        int nc;
        if(!root)
            return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        int s=0;
        while(1)
        {
            nc=q.size();
            if(nc==0)
                break;
            while(nc>0)
            {
                TreeNode *tmp=q.front();
                q.pop();
                if(lev==h)
                {
                    s+=tmp->val;
                    nc--;
                }
                else
                {
                    if(tmp->left)
                        q.push(tmp->left);
                    if(tmp->right)
                        q.push(tmp->right);
                    nc--;
                }
            }
            lev++;
        }
        return s;
        
    }
};
