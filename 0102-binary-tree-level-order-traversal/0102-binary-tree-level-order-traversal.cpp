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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>v;
        vector<int> v1;
        if(root==nullptr)
        {
            return v;
        }
      while(!q.empty())
      {
            vector<int> v1;
          long sz = q.size();
          while(sz--)
          {
              TreeNode* r = q.front();
              q.pop();
              v1.push_back(r->val);
              if(r->left)
                  q.push(r->left);
              if(r->right)
                  q.push(r->right);
              
          }
             v.push_back(v1);
      }
        
        return v;
        
        
    }
};