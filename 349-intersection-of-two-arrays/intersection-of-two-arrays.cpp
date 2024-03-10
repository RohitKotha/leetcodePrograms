class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            cout<<nums1[i];
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]++;
        }
        vector<int>v1;
        for(auto it:mp){
            if(it.second==2){
                v1.push_back(it.first);
            }
        }
        return v1;
    }
};