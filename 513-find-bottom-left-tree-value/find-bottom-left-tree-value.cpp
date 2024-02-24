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
int k=0;
int ma=0;
void fun(TreeNode*root,int lev){
    if(root==NULL){
        return;
    }
if(ma<lev){
ma=lev;
k=root->val;
}
fun(root->left,lev+1);
fun(root->right,lev+1);
}
    int findBottomLeftValue(TreeNode* root) {
        fun(root,1);
        return k;
    }
};