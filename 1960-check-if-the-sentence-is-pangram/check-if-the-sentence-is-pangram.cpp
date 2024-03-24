class Solution {
public:
    bool checkIfPangram(string sen) {
        if(sen.size()<26){
            return false;
        }
        vector<char>v1(26,0);
        
        for(int i=0;i<sen.size();i++){
            v1[int(sen[i]-'a')]=1;
            cout<<sen[i]-'a'<<" "<<int(sen[i]-'a')<<" ";
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=1){
                return false;
            }
        }
        return true;
    }
};