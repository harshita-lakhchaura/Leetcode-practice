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
    
    void inorder(TreeNode* root, vector<int> &ans)
    {
        if(root==NULL)
            return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int>ans,res;
        inorder(root, ans);
        unordered_map<int,int>mp;
        for(auto i:ans)
            mp[i]++;
        int mx=0;
        for(auto i:mp)
        {
            if(i.second>mx)
            {
                mx=i.second;
                res.clear();
                res.push_back(i.first);
            }
            else if(i.second==mx)
                res.push_back(i.first);
            else
                continue;
        }
        return res;
    }
};