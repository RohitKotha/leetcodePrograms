class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int m=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]<nums[j] and nums[k]<nums[j]){
                        m=min(m,nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        return m!=INT_MAX?m:-1;
    }
};