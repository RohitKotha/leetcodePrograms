class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int i=0;
        int j=0;
        long long res=0;
        int c=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]==maxi){
                c++;
            }
            while(c>=k){
                res+=n-j;
                if(nums[i]==maxi){
                    c--;
                }
                i++;
            }
            j++;
        }
        return res;
    }
};