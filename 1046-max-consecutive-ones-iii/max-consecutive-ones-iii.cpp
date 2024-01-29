#include <vector>

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int max1 = 0;

        while (j < nums.size()) {
            if (nums[j] == 1) {
                j++;
            } else {
                if (k > 0) {
                    k--;
                    j++;
                } else {
                    if (nums[i] == 0) {
                        k++;
                    }
                    i++;
                }
            }
            max1 = max(max1, j - i);
        }

        return max1;
    }
};
