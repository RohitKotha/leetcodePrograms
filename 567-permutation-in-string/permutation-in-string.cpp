class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        
        vector<int> s1_count(26, 0), s2_count(26, 0);
        
        // Count the frequency of each character in s1
        for (char c : s1) {
            s1_count[c - 'a']++;
        }
        
        // Initial window of size s1.size() in s2
        for (int i = 0; i < s1.size(); i++) {
            s2_count[s2[i] - 'a']++;
        }
        
        // Check if the first window is a permutation
        if (s1_count == s2_count) return true;
        
        // Now slide the window over s2
        for (int i = s1.size(); i < s2.size(); i++) {
            // Add the new character to the window
            s2_count[s2[i] - 'a']++;
            
            // Remove the character that is left behind from the window
            s2_count[s2[i - s1.size()] - 'a']--;
            
            // Check if the current window is a permutation
            if (s1_count == s2_count) return true;
        }
        
        return false;
    }
};
