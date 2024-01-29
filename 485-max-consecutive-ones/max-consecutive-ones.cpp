class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum=0;
            }
            sum+=nums[i];
            v1.push_back(sum);
        }
        auto max1=max_element(v1.begin(), v1.end());
        return *max1;
    }
};