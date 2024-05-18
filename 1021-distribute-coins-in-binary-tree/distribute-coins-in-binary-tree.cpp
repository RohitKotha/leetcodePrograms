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
int res=0;
    vector<int> fun(TreeNode*root,int l=1){
        if(root==NULL){
            return {0,0};
        }
        vector<int>vl=fun(root->left,l+1);
        vector<int>vr=fun(root->right,l+1);
        int s=1+vl[0]+vr[0];
        int c=root->val+vl[1]+vr[1];
        res+=abs(s-c);
        return {s,c};

    }
    int distributeCoins(TreeNode* root) {
    fun(root,1);
    return res;
    }
};