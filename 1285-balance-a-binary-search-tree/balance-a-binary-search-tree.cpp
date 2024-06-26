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

void inorder(TreeNode*root, vector<int>&v1){
    if(root==NULL){
        return;
    }
    inorder(root->left,v1);
    v1.push_back(root->val);
    inorder(root->right,v1);
}
TreeNode*fun(int l,int r,vector<int>v1){
    if(l>r){
        return NULL;
        
    }
    int mid=l+(r-l)/2;

    TreeNode *root=new TreeNode(v1[mid]);
    root->left=fun(l,mid-1,v1);
    root->right=fun(mid+1,r,v1);
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v1;
        inorder(root,v1);
        int l=0;
        int r=v1.size()-1;
        return fun(l,r,v1);
    }
};