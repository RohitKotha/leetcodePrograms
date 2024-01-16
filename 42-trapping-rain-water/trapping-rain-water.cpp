class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int output = 0;
        
        if (n <= 2) return 0;
        
        int left = 0;
        int right = n - 1;
        int left_max = 0;
        int right_max = 0;
        
        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] > left_max) {
                    left_max = height[left];
                } else {
                    output += left_max - height[left];
                }
                left++;
            } else {
                if (height[right] > right_max) {
                    right_max = height[right];
                } else {
                    output += right_max - height[right];
                }
                right--;
            }
        }
        
        return output;
    }
};