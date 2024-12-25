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
    void lar(TreeNode*root,int &ml,int l){
        if(root==NULL){
            return;
        }
        ml=max(l,ml);
        lar(root->left,ml,l+1);
        lar(root->right,ml,l+1);
    }
    void fun(TreeNode*root,int l,vector<int>&v1){
        if(root==NULL){
            return;
        }
        v1[l]=max(v1[l],root->val);
        fun(root->left,l+1,v1);
        fun(root->right,l+1,v1);
    }
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        int ml=0;
        lar(root,ml,0);
        vector<int>v1(ml+1,INT_MIN);
        fun(root,0,v1);
        return v1;
    }
};