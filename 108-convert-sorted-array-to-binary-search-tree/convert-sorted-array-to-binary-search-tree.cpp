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
TreeNode*fun(vector<int>&v1,int left,int right){
      if(left>right){
          return NULL;
      }
      int mid=(left+right)/2;
      TreeNode*root= new TreeNode(v1[mid]);
      root->left=fun(v1,left,mid-1);
      root->right=fun(v1,mid+1,right);
      return root;
  }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode*root=fun(nums,0,nums.size()-1);
        return root;
    }
};