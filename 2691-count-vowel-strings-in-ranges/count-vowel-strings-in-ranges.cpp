class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>ans(queries.size(),0);
        
        unordered_map<char,int>mp;
        mp['a']++;
        mp['e']++;
        mp['i']++;
        mp['o']++;
        mp['u']++;
       vector<int>pref(words.size(),0);
       int ok=0;
       for(int i=0;i<words.size();i++){
            if (!words[i].empty() && mp.find(words[i][0]) != mp.end() && mp.find(words[i][words[i].size() - 1]) != mp.end()) {
    ok+=1;
}

            pref[i]=ok;
       }
       for(int i=0;i<queries.size();i++){
        if(queries[i][0]==0){
            ans[i]=pref[queries[i][1]];
        }else{
            int lef=queries[i][0];
            int rig=queries[i][1];
            if(lef!=rig){
            ans[i]=pref[rig]-pref[lef-1];
            }else{
                if(rig==0){
                    ans[i]=pref[rig];
                }else{
                    ans[i]=pref[rig]-pref[lef-1];
                }
                
            }
        }
       }
       return ans;
    }
};