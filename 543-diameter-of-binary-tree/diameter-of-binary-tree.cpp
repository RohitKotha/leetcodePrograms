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
int maxd=0;
int fun (TreeNode*root){
    if(root==NULL){
        return 0;
    }
    int lefd=fun(root->left);
    int rigd=fun(root->right);
    maxd=max(maxd,lefd+rigd);
    return max(lefd,rigd)+1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        fun(root);
     return maxd; 
    }
};