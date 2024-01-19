#include <vector>

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle the case where k is larger than the size of the vector

      reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin() + k, nums.end());
    }
};
