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
    vector<int> inorderTraversal(TreeNode* root) {
        //Asked for Iterative Solve,Recursaive easy
        
        stack<TreeNode *>s;
        vector<int>v;
        if(!root)
            return vector<int>();
        
        TreeNode *cur=root;
        while(cur!=NULL ||s.empty()==false)
        {
            while(cur!=NULL)
            {
                s.push(cur);
                cur=cur->left;
            }
            cur=s.top();
            s.pop();
            v.push_back(cur->val);
            cur=cur->right;
        //Still Not the Fastest,recursive is faster
            
        }
        return v;
    }
};
