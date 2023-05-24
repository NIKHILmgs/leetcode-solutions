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
bool mir(TreeNode*r1,TreeNode*r2)
{
    if(!r1 and !r2)
        return true;
    else if(!r1 or !r2)
        return false;
    bool ans = (r1->val==r2->val and mir(r1->left,r2->right)and mir(r1->right,r2->left));
        return ans;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return mir(root->left,root->right);
        
    }
};