class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int c=0;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                v1.push_back(i);
            }
        }
        if(v1.size()==0){
            return true;
        }
        for(int i=0;i<v1.size()-1;i++){
            if((v1[i+1]-v1[i]-1)<k){
                return false;
            }
        }
        return true;
    }
};