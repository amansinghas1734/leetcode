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
        queue<TreeNode*> q;
        vector<int> v;
        if(root)q.push(root);
        while(!q.empty()){
            int m=INT_MIN;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* x=q.front();
                q.pop();
                m=max(x->val,m);
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }
            v.push_back(m);
        }
        return v;

    }
};