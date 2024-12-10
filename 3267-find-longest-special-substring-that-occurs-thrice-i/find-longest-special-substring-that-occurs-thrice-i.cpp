class Solution {
public:
    int maximumLength(string s) {
        map<pair<char,int>,int>mp;
        for(int i=0;i<s.size();i++){
            char temp=s[i];
            int l=0;
            for(int j=i;j<s.size();j++){
                if(temp==s[j]){
                    l++;
                    mp[{s[j],l}]+=1;
                    
                }else{
                    break;
                }
            }
           
        }
        int ans=0;
        for(auto &it:mp){
            int sti=it.first.second;
            int co=it.second;
            cout<<sti<<" "<< it.second;
            cout<<endl;
            if(co>=3 and sti>ans){
                ans=sti;
            }
        }
        return ans==0?-1:ans;
    }
};