class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            int ok=0;
            ok=ok*10+details[i][11]-'0';
            ok=ok*10+details[i][12]-'0';
            if(ok>60){
                ans++;
            }
            cout<<ok<<endl;
        }
        return ans;
    }
};