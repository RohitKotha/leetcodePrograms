class Solution {
public:
    int minimumLength(string s) {
        map<char,int>mpp;
        int ans=0;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            if(mpp[s[i]]==3){
                mpp[s[i]]=1;
            }
        }
        for(auto i=mpp.begin();i!=mpp.end();i++){
            ans+=i->second;
        }
        return ans;
    }
};