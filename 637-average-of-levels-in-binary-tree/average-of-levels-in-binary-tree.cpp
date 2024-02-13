
class Solution {
public:
    vector<pair<double,int>>v1;
    void fun(TreeNode*root,int l,int c){
        if(root==NULL){
            return;
        }
        if(l<v1.size()){
            v1[l].first+=root->val;
            v1[l].second+=1;

        }
        else{
            v1.push_back(make_pair(root->val,1));
        }
        fun(root->left,l+1,c+1);
        fun(root->right,l+1,c+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>v;
        fun(root,0,0);
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i].first/v1[i].second);
        }
        v1.clear();
        return v;
    }
};