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
        int ans=0;
        void fun(TreeNode *root){
            if(root==NULL){
                return;
            }
            if( root->left!=NULL and root->left->left==NULL and root->left->right==NULL){
                ans+=root->left->val;
            }
            fun(root->left);
            fun(root->right);
        }
    int sumOfLeftLeaves(TreeNode* root) {
        fun(root);
        return ans;
    }
};