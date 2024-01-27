#include <vector>
#include <algorithm>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        vector<int> v1;
        int sum = 0;
        vector<int> l;
        int i = 0;
        int j = 0;
        int min1=INT_MAX;
        while (j < nums.size()) {
            sum+=nums[j];

            while(sum>=target){
                min1=min(min1,j-i+1);
                sum-=nums[i];
                
                i++;
            }
            j++;
        }
        return (min1==INT_MAX)?0:min1;
    }
};
