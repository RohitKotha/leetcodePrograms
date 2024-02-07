class Solution {
public:
     vector<vector<int>>v1;
    vector<int> vk;
    void fun(vector<int> &v,int n,int k,int i){
        if(vk.size()==k){
        v1.push_back(vk);
        return;
        }
        if(i>=n){
            
            return;
        }
        
        vk.push_back(v[i]);
        fun(v,n,k,i+1);
        vk.pop_back();
        fun(v,n,k,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>vw;
        for(int i=0;i<n;i++){
            vw.push_back(i+1);
        }
        fun(vw,n,k,0);
        return v1;
    }
};