class Solution {
public:
    bool checkValidString(string s) {
        int pre=0;
        int post=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='*'){
                pre++;
            }
            else{
                pre--;
            }
            if(pre<0){
            return false;
        }
        }
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')' or s[i]=='*'){
                post++;
            }
            else{
                post--;
            }
              if(post<0){
            return false;
        }
        }
      
        return true;
    }
};