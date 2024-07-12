class Solution {
public:
    string fun(string s,string check){
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(st.top()== check[0] and s[i]==check[1]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int maximumGain(string s, int x, int y) {
        if(s.size()==1){
            return 0;
        }
        int co=0;
        int xp=s.size();
        if(x>=y){
            
            s=fun(s,"ab");
            co+=(xp-s.size())/2;
            co*=x;
            int op=s.size();
            s=fun(s,"ba");
            int kk=(op-s.size())/2;
            co+=kk*y;
        }else{
            
            s=fun(s,"ba");
            co+=(xp-s.size())/2;
            co*=y;
            int op=s.size();
            s=fun(s,"ab");
            int kk=(op-s.size())/2;
            co+=kk*x;
        }
        return co;
    }
};