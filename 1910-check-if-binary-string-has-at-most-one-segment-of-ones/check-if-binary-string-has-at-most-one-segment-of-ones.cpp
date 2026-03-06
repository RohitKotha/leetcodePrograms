class Solution {
public:
    bool checkOnesSegment(string s) {
      
      int ok=0,sum=1,c=1;
     
      for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            sum=0;
        }
        else{
            if(sum==1){
               
            }else{
             
                c++;
            }
            
        }
      }
      return (c==1);
    }
};