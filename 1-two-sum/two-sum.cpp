class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        int t=target;
        //vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int t=(target-nums[i]);
            if(mp.find(t)!=mp.end() and i!=mp[t]){
                return {i,mp[t]};
            }
        }
        return {};
    }
};