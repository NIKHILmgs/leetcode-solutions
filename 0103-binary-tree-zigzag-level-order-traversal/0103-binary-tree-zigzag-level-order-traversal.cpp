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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int>levels;
            for(int i=0;i<n;i++)
            {
                 TreeNode* node = q.front();
                  q.pop();
                if(node->left!=nullptr)
                    q.push(node->left);
                if(node->right!=nullptr)
                    q.push(node->right);
                levels.push_back(node->val);
                
            }
            ans.push_back(levels);
        }
        int n = ans.size();
        for(int i=0;i<n;i++)
        {
            if(i%2!=0)
            reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
    }
};