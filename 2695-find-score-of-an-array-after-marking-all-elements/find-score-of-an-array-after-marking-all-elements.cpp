class Solution {
public:
    long long findScore(vector<int>& nums) {
        map<int, vector<int>> mp;
        
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        
        long long score = 0;
       
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            for (int j = 0; j < it->second.size(); j++) {
                int idx = it->second[j];
                if (nums[idx] != 0) {
                    score += nums[idx];
                    nums[idx] = 0; 
                    
                    
                    if (idx > 0) {
                        nums[idx - 1] = 0;
                    }
                    if (idx < nums.size() - 1) {
                        nums[idx + 1] = 0;
                    }
                }
            }
        }
        return score;
    }
};
