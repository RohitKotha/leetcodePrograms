class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v1(nums.size(), 0);
        vector<int> v2(nums.size(), 0);
        vector<int> ans;

        v1[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            v1[i] = v1[i - 1] * nums[i - 1];
        }

        v2[nums.size() - 1] = 1; //Correct initialization.
        for (int i = nums.size() - 2; i >= 0; i--) {
            v2[i] = v2[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(v1[i] * v2[i]);
        }
        
        return ans;
    }
};