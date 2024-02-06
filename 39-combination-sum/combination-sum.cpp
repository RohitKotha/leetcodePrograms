class Solution {
public:
    vector<vector<int>>v1;
    vector<int> vk;
    void fun(vector<int> v,int t,int i){
        if(i>=v.size()){
            if(t==0){
                v1.push_back(vk);
            }
            return;
        }
        if(v[i]<=t){
            vk.push_back(v[i]);
            
            fun(v,t-v[i],i);
            vk.pop_back();
        }
        fun(v,t,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        fun(candidates,target,0);
        return v1;
    }
};