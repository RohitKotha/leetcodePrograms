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
int ok=0;
    void fun(TreeNode*root,int cur){
        if(root==NULL){
            
            return;
        }
        
        cur=cur*10+root->val;
        if(root->left==NULL and root->right==NULL){
                v1.push_back(cur);
            return;
            
            }
        fun(root->left,cur);
        
        fun(root->right,cur);
    }
    int sumNumbers(TreeNode* root) {
        fun(root,0);
        int sum1=0;
        for(int i=0;i<v1.size();i++){
           sum1+=v1[i];
           cout<<v1[i]<<" ";
        }
        return sum1;
    }
};