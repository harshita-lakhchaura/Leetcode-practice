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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)
            return vector<int>{};
        
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int length=q.size();
            int mx=INT_MIN;
            for(int i=0;i<length;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                mx=max(mx,node->val);
                if (node->left) {
                    q.push(node->left);
                }
                
                if (node->right) {
                    q.push(node->right);
                }
            }
            ans.push_back(mx);
        }
        return ans;
    }
};