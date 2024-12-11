class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
     vector<vector<int>>v1;
     for(int i=0;i<nums.size();i++){
        v1.push_back({nums[i]-k,nums[i]+k});
     }
     queue<vector<int>>q1;
     sort(v1.begin(), v1.end());
    int ans=0;
     for(int i=0;i<nums.size();i++){
        while(!q1.empty() and q1.front()[1]<v1[i][0]){
            q1.pop();
        }
        q1.push(v1[i]);
        ans=max(ans,(int)q1.size());
     }
     return ans;
    }
};