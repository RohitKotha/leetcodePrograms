class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> count(k, 0);
        
        // Count the occurrences of each remainder
        for (int num : arr) {
            int remainder = (num % k + k) % k; // Ensure non-negative remainder
            count[remainder]++;
        }
        
        // Check pairs of remainders
        if (count[0] % 2 != 0) return false; // Pairs of numbers giving remainder 0
        
        for (int i = 1; i <= k / 2; ++i) {
            if (count[i] != count[k - i]) {
                return false; // Mismatch in pairs
            }
        }
        
        return true;
    }
};
