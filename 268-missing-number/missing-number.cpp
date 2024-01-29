class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            k=k+nums[i];
        }
        cout<<k;
        cout<<nums.size();
         int ex= (nums.size() * (nums.size() + 1)) / 2;
        
            return ex-k;
        
    }
};