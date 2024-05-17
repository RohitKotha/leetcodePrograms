class Solution {
 public:
  TreeNode* removeLeafNodes(TreeNode* root, int target) {
    if (root == nullptr)
      return nullptr;
    root->left = removeLeafNodes(root->left, target);
    root->right = removeLeafNodes(root->right, target);
    if( root->left == nullptr && root->right == nullptr and root->val==target){
        return NULL;
    }
    return root;
  }

 
};