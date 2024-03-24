class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=2){
            return nums[nums.size()-1];
        }
        reverse(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        if(nums.size()<=2){
            reverse(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        if(nums.size()==3){
            return nums[nums.size()-1];
        }
        reverse(nums.begin(),nums.end());
        return nums[nums.size()-3];
    }
};