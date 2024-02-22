class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int c=0;
        unordered_map<int,int>mp;
        if(trust.size() == 0){
            if(n ==1){
                return n;
            }
            else{
                return -1;
            }
        }
        for(int i =0;i<trust.size();i++){
            if(mp.find(trust[i][1])==mp.end()){
                mp[trust[i][1]]=1;
            }
            else{
                mp[trust[i][1]]+=1;
            }
    }
    int max_value=0;
    int ok=0;
     for (auto it = mp.begin(); it != mp.end(); it++) {
    if (it->second > max_value) {
      max_value = it->second;
    ok=it->first;
    }
  }
    if(max_value==n-1 ){
        for(int i=0;i<trust.size();i++){
            if(trust[i][0]==ok){
                return -1;
            }
        }
        return ok;
    }
    else{
        return -1;
    }
    }
};  