class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>v1;
        string st="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if (st!=""){
                    v1.push_back(st);
                    st="";
                    }
                continue;
                }
            st+=s[i];
            }
        
      if (st!=""){
                    v1.push_back(st);
                    st="";
                    }
        string ok=v1[v1.size()-1];
                     
return ok.size();
                    
                

        
    }
};