class Solution {
public:
    int maxScore(string s) {
        int maxi=0;
        int n=s.size()-1;
        
        int lef;
        if(s[0]=='0'){
            lef=1;
        }else{
            lef=0;
        }
        int rig=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='1'){
                rig++;
            }
        }
       
        
        for(int i=1;i<s.size();i++){
            maxi=max(maxi,lef+rig);
            if(s[i]=='0'){
                lef++;
            }else{
                rig--;
            }
        }
        return maxi;
    }
};