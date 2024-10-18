class Solution {
public:
int fun(int idx,int curr,vector<int>&nums,int maxor){
    if(idx==nums.size()){
        if(curr==maxor){
            return 1;
        }
        return 0;
    }

    int pick=fun(idx+1,curr|nums[idx],nums,maxor);
    int notpick=fun(idx+1,curr,nums,maxor);
    return pick+notpick;
}
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor=0;
        for(int i=0;i<nums.size();i++){
            maxor |=nums[i];

        }
        int curr=0;
        return fun(0,curr,nums,maxor);
    }
};