class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v1) {
      int maxi=INT_MIN,ans=INT_MIN;
      for(int i=0;i<v1.size();i++){
        if(i==0){
            maxi=max(v1[i]+i,maxi);
        }else{
            ans=max((maxi+(v1[i]-i)),ans);
            maxi=max(v1[i]+i,maxi);
        }
      }  
      return ans;
    }
};