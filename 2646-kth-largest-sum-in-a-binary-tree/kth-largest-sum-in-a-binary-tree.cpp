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
    void fun(TreeNode*root,long long l,unordered_map<long long,long long>&mp){
        if(root==NULL){
            return;
        }
        mp[l]+=root->val;
        fun(root->left,l+1,mp);
        fun(root->right,l+1,mp);
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>v1;
        unordered_map<long long,long long>mp;
        fun(root,1,mp);
        for(auto i:mp){
            v1.push_back(i.second);
        }
        sort(begin(v1),end(v1));
        reverse(begin(v1),end(v1));
        if(k<=v1.size()){
            return v1[k-1];
        }
        return -1;
    }
};