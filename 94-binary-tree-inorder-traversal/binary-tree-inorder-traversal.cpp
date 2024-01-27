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
    vector<int>v1;
    void fun(TreeNode*temp){
        if(temp==NULL){
            return;
        }
        fun(temp->left);
        v1.push_back(temp->val);
        fun(temp->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode*temp=root;
        fun(temp);
        return v1;
    }
};