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
void inorder(TreeNode* node,int &p,int &ans)
{
    
    if(!node)
        return ;
    inorder(node->left,p,ans);
    if(p!=-1)
        ans = min(ans,abs(node->val - p));
     p = node->val;
    
    inorder(node->right,p,ans);
    
}
    

class Solution {
public:
    int minDiffInBST(TreeNode* root) {
        if(!root)
            return 0;
        int p = -1,ans = INT_MAX;
      inorder(root,p,ans);
        return ans;
        
    }
};