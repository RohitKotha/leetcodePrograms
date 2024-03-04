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
void fun(TreeNode*root){
    if(root==NULL){
        return;
    }
    fun(root->left);
    v1.push_back(root->val);
    fun(root->right);
}
    bool isValidBST(TreeNode* root) {
        fun(root);
        for(int i=0;i<v1.size()-1;i++){
            if(v1[i]>=v1[i+1]){
                return false;
            }
        }
        return true;
    }
};