class Solution {
public:
    int countKeyChanges(string s) {
        int ans=0;
        char ini=s[0];
        for(int i=1;i<s.size();i++){
            int a1=(int)ini;
            //CbDdBCCcBb
            int a2=(int)s[i];
           // cout<<(char)a1<<" "<<(char)a2<<endl;
            if(ini!=s[i]){
                if(a1>=65 and a1<=90 and a2>=65 and a2<=90){
                    ans++;
                }else if( (a1>=97 and a1<=122) and (a2>=97 and a2<=122)){
                    ans++;
                }
                else if(a1>=65 and a1<=90){
                    if(a2>=97 and a2<=122){
                        if(a1+32!=a2){
                            ans++;
                        }
                    }
                }
                else if(a1>=97 and a1<=122){
                    if(a2>=65 and a2<=90){
                        if(a1!=a2+32){
                            ans++;
                        }
                    }
                } 
            }
            ini=s[i];
            cout<<ans<<endl;
        }
        return ans;
    }
};
//CbDdBCCcBb