class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v1(candies.size(),true);
        int maxi=0;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(maxi>candies[i]+extraCandies){
                v1[i]=false;
            }
        }
        return v1;
    }
};