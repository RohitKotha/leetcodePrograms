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
TreeNode* lowe(TreeNode* root, int p, int q) {
        if(root==NULL){
            return NULL;
        }
        if(root->val==p or root->val==q){
            return root;
        }
        TreeNode* left=lowe(root->left,p,q);
        TreeNode*right=lowe(root->right,p,q);
        if(left!=NULL and right!=NULL){
            return root;
        }
        if(left!=NULL and right==NULL){
            return left;
        }
       // if(right!=NULL and left==NULL){
            return right;
        //}

    }
    bool findpath(TreeNode*root,int k,string &st){
        if(root==NULL){
            return false;
        }
        if(root->val==k){
            return true;
        }
        st.push_back('L');
        if(findpath(root->left,k,st)==true){
            return true;
        }
        st.pop_back();
        st.push_back('R');
        if(findpath(root->right,k,st)==true){
            return true;
        }
         st.pop_back();
         return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode*rootval=lowe(root,startValue,destValue);
        string source="";
        string dest="";
        findpath(rootval,startValue,source);
        findpath(rootval,destValue,dest);
        string ans1="";
         
        for(int i=0;i<source.size();i++){
         ans1.push_back('U');
        }
        ans1+=dest;
        return ans1;
    }
};