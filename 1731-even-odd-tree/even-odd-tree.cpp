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
bool ok=true;
vector<int>v1;
map<int,int>mp;
void fun(TreeNode*root,int level){
    if(root==NULL){
        return;
    }
    if(level%2==0){
        if(mp.find(level)==mp.end() and root->val%2!=0){
            mp[level]=root->val;
        }
        else if(mp[level]<root->val  and root->val%2!=0){
            mp[level]=root->val;
        }
        else{
            ok=false;
        }
    }
    else if(level%2!=0){
        if(mp.find(level)==mp.end()  and root->val%2==0){
            mp[level]=root->val;
        }
        else if(mp[level]>root->val and root->val%2==0){
            mp[level]=root->val;
        }
        else{
            ok=false;
        }
    }
    fun(root->left,level+1);
    fun(root->right,level+1);
}
    bool isEvenOddTree(TreeNode* root) {
        mp.clear();
        fun(root,0);
        return ok;
    }
};