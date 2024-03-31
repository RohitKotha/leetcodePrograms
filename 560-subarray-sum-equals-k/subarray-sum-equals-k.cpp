class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int pre=0;
        mp[0]=1;
        int rem;
        int c=0;
        for(int i=0;i<nums.size();i++){
            pre+=nums[i];
            rem=pre-k;
            if(mp.find(rem)!=mp.end()){
                c+=mp[rem];
            }
            mp[pre]++;

        }
        return c;
    }
};