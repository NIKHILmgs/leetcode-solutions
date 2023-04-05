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
    TreeNode* prev,*temp1,*temp2;
public:
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        if(prev!=NULL and prev->val>root->val)
        {
            if(temp1==NULL)
                temp1 = prev;
             temp2 = root;
        }
       
        prev = root;
        inorder(root->right);
       
    }
    void recoverTree(TreeNode* root) {
         if(root==NULL)
            return;
        prev=temp1=temp2=NULL;
        inorder(root);
        int temp = temp1->val;
        temp1->val = temp2->val;
        temp2->val = temp;
    }
};