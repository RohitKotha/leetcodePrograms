class Solution {
public:
    bool checkOnesSegment(string s) {
      vector<int>v1;
      int ok=0,sum=1;
      v1.push_back(0);
      for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            sum=0;
        }
        else{
            if(sum==1){
                v1[ok]+=1;
            }else{
                ok++;
                v1.push_back(0);
            }
            
        }
      }
      return (v1.size()==1);
    }
};