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
    
    void convert(TreeNode* current, int parent, unordered_map<int, unordered_set<int>>& map) {
        if (current == nullptr) {
            return;
        } 
        if (map.find(current->val) == map.end()) {
            map[current->val] = unordered_set<int>();
        }
        unordered_set<int>& adjacentList = map[current->val];
        if (parent != 0) {
            adjacentList.insert(parent);
        } 
        if (current->left != nullptr) {
            adjacentList.insert(current->left->val);
        } 
        if (current->right != nullptr) {
            adjacentList.insert(current->right->val);
        }
        convert(current->left, current->val, map);
        convert(current->right, current->val, map);
    }
    
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int, unordered_set<int>> map;
        convert(root, 0, map);
        queue<int>q;
        q.push(start);
        unordered_set<int>vis;
        vis.insert(start);
        int min=0;
        while(!q.empty())
        {
            int l=q.size();
            while(l>0)
            {
                int curr=q.front();
                q.pop();
                
                for(int num:map[curr]){
                    if(vis.find(num)==vis.end()){
                        vis.insert(num);
                        q.push(num);
                    }
                }
                l--;
            }
            min++;
        }
        return min-1;
    }
};