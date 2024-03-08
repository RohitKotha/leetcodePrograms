class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v1;
        for(auto it:mp){
            v1.push_back(it.second);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        int sum1=0;
        int m1=0;
        for(int i=0;i<v1.size();i++){
            if(m1<=v1[i]){
                m1=v1[i];
                sum1+=v1[i];
            }
        }
        return sum1;


    }
};