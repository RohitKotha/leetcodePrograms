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
 #include<bits/stdc++.h>
vector<vector<int>>v1;
vector<int>ok;
void fun(TreeNode*root){
    if(root==NULL){
        ok.push_back(-1);
        return;
    }
    ok.push_back(root->val);
    fun(root->left);
    fun(root->right);
}
void hehe(TreeNode*root){
    if(root==NULL){
        return;
    }
    fun(root);
    v1.push_back(ok);
    ok.clear();
    hehe(root->left);
    hehe(root->right);
}

class Solution {
public:

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        hehe(root);
        vector<vector<int>>t1;
        vector<vector<int>>t2;
        t1=v1;
        ok.clear();
        v1.clear();
        hehe(subRoot);
        t2=v1;
        ok.clear();
        v1.clear();
        int c=0;
        

        for(auto it1:t2){
            for (auto it2:t1){
                if(it1==it2){
                    c++;
                }
                
            }
        }
          bool isSubvector = includes(t1.begin(), t1.end(), t2.begin(), t2.end());
          return c>=t2.size();
    }
};