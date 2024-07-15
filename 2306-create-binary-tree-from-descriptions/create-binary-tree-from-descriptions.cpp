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
TreeNode* fun(int r, unordered_map<int,vector<int>>& mp) {
    if (mp.find(r) == mp.end()) {
      return NULL;
    }
    TreeNode* root = new TreeNode(r);
    int left = mp[r][0];
    int right = mp[r][1];
    if (left != 0) {
      root->left = fun(left, mp);
    }
    if (right != 0) {
      root->right = fun(right, mp);
    }
    return root;
  }

    TreeNode* createBinaryTree(vector<vector<int>>& desc) {
          unordered_map<int,vector<int>>mp;
        unordered_map<int,int>ro;
        int n=desc.size();
        for(int i=0;i<n;i++){
        int p = desc[i][0];
        int c = desc[i][1];
        int l = desc[i][2];

        
            if(ro.find(p)==ro.end()){
                ro[p]=1;
            }
            ro[c]+=2;
        
            if(mp.find(p)!=mp.end()){
                if(l==1){
                    mp[p][0]=c;
                }
                else if(l==0){
                    mp[p][1]=c;
                }
            }else{
                mp[p]=vector<int>(2,0);
                if(l==1){
                    mp[p][0]=c;
                }
                else if(l==0){
                    mp[p][1]=c;
                }
            }
 if(mp.find(c)==mp.end()){
                mp[c]=vector<int>(2,0);
            }
        }


/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
int pp;
for(auto it:ro){
    if(it.second==1){
pp=it.first;
break;
    }
}


TreeNode* root=fun(pp,mp);


        return root;
    }
};