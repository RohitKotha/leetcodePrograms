#include<bits/stdc++.h>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN; 
        int l=0,r=0;
        double windo=0;
        for(int i=0;i<k;i++){
            windo+=nums[i];
        }
        maxi=(windo/k);
        for(int r=k;r<nums.size();r++){
            windo+=nums[r]-nums[r-k];
            maxi=max(maxi,(windo/k));
        }
        return maxi;
    }
};