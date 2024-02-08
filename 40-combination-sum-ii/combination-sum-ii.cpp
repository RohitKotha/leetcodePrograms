#include <vector>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    
    void backtrack(vector<int>& candidates, int target, int start) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        
        for (int i = start; i < candidates.size(); ++i) {
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue; // skip duplicates
            }
            if (candidates[i] > target) {
                break; // pruning
            }
            temp.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0);
        return ans;
    }
};
