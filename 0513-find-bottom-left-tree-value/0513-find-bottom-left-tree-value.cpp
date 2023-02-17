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
    void level(TreeNode* root, vector<vector<int>>&vec)
    {
        if(!root)
            return;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
           int sz = q.size();
            vector<int>v;
            while(sz--)
            {
                TreeNode* node = q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
            }
            vec.push_back(v);
            
        }
        
        
}
    int findBottomLeftValue(TreeNode* root) {
         vector<vector<int>>vec;
        level(root,vec);
        return (vec[vec.size()-1][0]);
        
    }
};