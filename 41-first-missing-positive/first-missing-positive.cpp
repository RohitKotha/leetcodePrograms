class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        int c=0;
        int ml=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            ml=max(ml,nums[i]);
            }
        for(int i=1;i<=ml;i++){
            if(mp.find(i)==mp.end()){
                c=i;
                break;
                }
            }
        if(c==0){
            if(ml<1){
                c=1;
                }
            else{
                c=ml+1;
                }
            }
        return c;
    }
};