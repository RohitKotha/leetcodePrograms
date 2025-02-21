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
class FindElements {
public:
unordered_map<int,int>mp;
void fun(TreeNode* root,unordered_map<int,int>&mp,int x){
    if(root==NULL){
        return;
    }
    root->val=x;
    mp[x]++;
    fun(root->left,mp,2*x+1);
    fun(root->right,mp,2*x+2);

}
    FindElements(TreeNode* root) {
        mp.clear();
        fun(root,mp,0);
    }
    
    bool find(int target) {
        return (mp.find(target)!=mp.end());
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */