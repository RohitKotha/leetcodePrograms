class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v1) {
      int maxi=v1[0]+0,ans=INT_MIN;
      for(int i=1;i<v1.size();i++){
        
            ans=max((maxi+(v1[i]-i)),ans);
            maxi=max(v1[i]+i,maxi);
      }  
      return ans;
    }
};