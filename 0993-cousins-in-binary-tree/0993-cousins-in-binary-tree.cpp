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
    int xlvl,ylvl;
        TreeNode* xval,*yval;
    void dfs(TreeNode *root,int x,int y,int lvl,TreeNode *par)
    {
        if(root==NULL)
            return;
        if(root->val==x)
        {
            xlvl = lvl;
            xval = par;
            return;
        }
         if(root->val==y)
        {
            ylvl = lvl;
            yval = par;
             return;
        }
        dfs(root->left,x,y,lvl+1,root);
        dfs(root->right,x,y,lvl+1,root);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(root==NULL)
            return false;
        xlvl=ylvl=0;
        xval=yval=NULL;
        dfs(root,x,y,0,NULL);
        
        return (xlvl==ylvl and xval!=yval);
    }
};