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
        if (temp == nullptr) {
            return;
        }

        if (temp->left == NULL && temp->right == NULL)
{
            v1.push_back(temp->val);
           
            return;
        }
        if(temp->left!=NULL){
            fun(temp->left);
        }
        if(temp->right!=NULL){
            fun(temp->right);
        }
        v1.push_back(temp->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode*temp=root;
        fun(temp);
        return v1;
    }
};