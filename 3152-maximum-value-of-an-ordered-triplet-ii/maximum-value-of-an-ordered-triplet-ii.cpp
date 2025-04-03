class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;
        int maxDiff = 0;
        int maxNum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            ans = std::max(ans, static_cast<long long>(maxDiff) * num);
            maxDiff = std::max(maxDiff, maxNum - num);
            maxNum = std::max(maxNum, num);
        }

        return ans;
    }
};