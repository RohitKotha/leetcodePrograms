class Solution {
public:
    string makeGood(string s) {
        if(s.size()<=1){
            return s;
        }
        string ans="";
        stack<char>st;
        
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(st.top()>='A' and st.top()<='Z' and s[i]>='a' and s[i]<='z' and tolower(st.top())==s[i]){
                    
                        if(!st.empty()){
                            st.pop();
                        }
                    
                }
                else if(st.top()>='a' and st.top()<='z' and s[i]>='A' and s[i]<='Z' and tolower(s[i])==st.top()){
                    
                        if(!st.empty()){
                            st.pop();
                        }
                    
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};