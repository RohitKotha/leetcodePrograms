class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            nums[i]-=i;
        }
        long long count=0,prev=0;
        for(int i=0;i<nums.size();i++){
            prev=i;
            if(mp.find(nums[i])!=mp.end()){
                count+=(prev-mp[nums[i]]);
            }else{
                count+=prev;
            }
            mp[nums[i]]++;
            
        }
        return count;
    }
};