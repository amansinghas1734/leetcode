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
    void solve(vector<vector<int>>& ans, TreeNode* node, int l){
        if(node==nullptr){
            return;
        }
        if(l>=ans.size()){
            ans.push_back({});
        }
        ans[l].push_back(node->val);
        solve(ans,node->left,l+1);
        solve(ans,node->right,l+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        solve(ans,root,0);
        return ans;
    }
};