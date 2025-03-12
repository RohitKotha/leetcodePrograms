class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        // Find the first index where nums[index] >= 0
        int left = 0, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= 0) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        int firstNonNegative = left;

        // Find the first index where nums[index] > 0
        left = 0, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > 0) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        int firstPositive = left;

        // Number of negative numbers is firstNonNegative
        int negativeCount = firstNonNegative;

        // Number of positive numbers is n - firstPositive
        int positiveCount = n - firstPositive;

        return max(negativeCount, positiveCount);
    }
};