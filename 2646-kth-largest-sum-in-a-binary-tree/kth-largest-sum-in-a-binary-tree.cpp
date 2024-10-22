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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>v1;
        queue<TreeNode*>q1;
        q1.push(root);
        long long i=1;
        unordered_map<long long,long long>mp;
        while(!q1.empty()){
            long long n=q1.size();
            while(n!=0){
                TreeNode*temp=q1.front();
                q1.pop();
                if(temp->left){
                    q1.push(temp->left);
                }
                if(temp->right){
                    q1.push(temp->right);
                }
                mp[i]+=temp->val;
                n--;
            }
            i++;
        }

        for(auto it:mp){
            v1.push_back(it.second);
        }
        sort(begin(v1),end(v1));
        reverse(begin(v1),end(v1));
        if(k<=v1.size()){
            return v1[k-1];
        }
        return -1;

    }
};