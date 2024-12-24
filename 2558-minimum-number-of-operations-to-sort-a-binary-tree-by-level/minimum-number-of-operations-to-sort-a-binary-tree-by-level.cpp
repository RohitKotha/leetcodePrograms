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
    int minimumOperations(TreeNode* root) {
        
        int ans=0;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            int si=q1.size();
            vector<int>v1;
            vector<int>v2;
            while(si!=0){
                TreeNode*temp=q1.front();
                q1.pop();
                if(temp->left!=NULL){
                    q1.push(temp->left);
                }
                if(temp->right!=NULL){
                    q1.push(temp->right);
                }
                v1.push_back(temp->val);
                si--;
            }
           v2=v1;
           unordered_map<int,int>mp;
           for(int i=0;i<v1.size();i++){
            mp[v1[i]]=i;
           }
           sort(v2.begin(),v2.end());
            for (int i = 0; i < v1.size(); i++) {
    if (v1[i] != v2[i]) {
        int correctIndex = mp[v2[i]];
        swap(v1[i], v1[correctIndex]);
        mp[v1[correctIndex]] = correctIndex;
        mp[v1[i]] = i;
        ans++;
    }
}
        }
        return ans;
    }
};