class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        mp['a']=0;
        mp['b']=0;
        mp['c']=0;
        int ans=0;
        int left=0,right=0;
        for(right=0;right<s.size();right++){
            mp[s[right]]++;
            while(mp['a']>0 and mp['b']>0 and mp['c']>0){
                ans+=s.size()-right;
                mp[s[left]]--;
                left++;
            }
        }
        return ans;
    }
};