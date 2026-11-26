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
    void takeit(TreeNode* root,unordered_map<int,int>& m,int lev){
        if(root==nullptr){
            return;
        }
        m[lev]+=root->val;
        takeit(root->left,m,lev+1);
        takeit(root->right,m,lev+1);
    }
    int maxLevelSum(TreeNode* root) {
    unordered_map<int,int> m;
    takeit(root,m,1);
    int ma=1;
    for(auto x:m){
        if(x.second>=m[ma]){
            ma=x.first;
        }
    }
    return ma;
    }
};