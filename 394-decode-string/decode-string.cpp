    class Solution {
    public:
        string decodeString(string s) {
            int n=0;
            stack<char>st;
            stack<int>nt;
            string str="";
            string teo="";
            for(int i=0;i<s.size();i++){
                if(isdigit(s[i])){
                    int num=0;
                    while(isdigit(s[i])){
                        num=num*10+s[i]-'0';
                        i++;
                    }
                    i--;
                    nt.push(num);
                }
                else{
                    if(!st.empty()){
                        if(s[i]==']'){
                            while(!st.empty() and st.top()!='['){
                                str=st.top()+str;
                                st.pop();
                            }
                            if(!nt.empty()){
                                int k=nt.top();
                                nt.pop();
                                string temp=str;
                                //k-=1;
                                for(int p=1;p<k;p++){
                                    str+=temp;
                                }
                            }
                            if(st.size()==1 and st.top()=='['){
                                st.pop();
                                
                            }
                            if(st.size()>1){
                                st.pop();
                                
                            }
                            for(int j=0;j<str.size();j++){
                                    st.push(str[j]);
                                }
                                str="";
                        }
                        else{
                            st.push(s[i]);
                        }
                    }
                    else{
                        st.push(s[i]);
                    }
                }
            }
            while(!st.empty()){
                str=st.top()+str;
                st.pop();
            }
            return str;
        }
    };