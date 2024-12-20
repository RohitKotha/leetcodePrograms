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
    void fun(TreeNode *root,  unordered_map<int,vector<int>>&mp,int l){
        if(root==NULL){
            return;
        }
        mp[l].push_back(root->val);
        fun(root->left,mp,l+1);
        fun(root->right,mp,l+1);
    }
   void fun1(TreeNode *root, unordered_map<int, vector<int>>& mp, int l, vector<int>& v1) {
    if (root == NULL) {
        return;
    }

    if (l % 2 != 0) {
        // Correct way to assign the reversed values from mp[l]
        root->val = mp[l][mp[l].size() - 1 - v1[l]];
        v1[l]++;
    }

    fun1(root->left, mp, l + 1, v1);
    fun1(root->right, mp, l + 1, v1);
}

    TreeNode* reverseOddLevels(TreeNode* root) {
        unordered_map<int,vector<int>>mp;
        fun(root,mp,0);
        for(auto it:mp){
            reverse(it.second.begin(),it.second.end());
        }
        vector<int>v1(mp.size(),0);
        fun1(root,mp,0,v1);
        return root;
    }
};