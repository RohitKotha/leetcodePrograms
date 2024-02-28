class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        vector<long long>nums1(nums.begin(),nums.end());
        for(int i=nums1.size()-1;i>0;i--){
            if(nums1[i-1]<=nums1[i]){
                nums1[i]+=nums1[i-1];
                nums1.erase(nums1.begin()+i-1);
            }
        }
         auto it = max_element(nums1.begin(), nums1.end());
        return *it;
    }
};