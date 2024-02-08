class Solution {
public:
vector<vector<int>>v1;
vector<int>vk;
void fun(vector<int> &v,int k,int n,int i){
   
        if(vk.size()==k){
            if(n==0){
                v1.push_back(vk);
            }
            return;
        }
        if(i>=v.size()|| v[i] > n){
            return;
        }
        vk.push_back(v[i]);
        fun(v,k,n-v[i],i+1);
        vk.pop_back();
        fun(v,k,n,i+1);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>tp;
        for(int i=1;i<=9;i++){
            tp.push_back(i);
        }
        fun(tp,k,n,0);
        return v1;
    }
};