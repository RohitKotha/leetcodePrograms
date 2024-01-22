class Solution {
public:
    vector<string>sol;
    void rec(int len,string &digi,string &temp,unordered_map<char,string>&mp){
        if(len>=digi.length()){
            sol.push_back(temp);
            return;
        }
        
            char ch=digi[len];
            string str=mp[ch];
            for(int i=0;i<str.length();i++){
                temp.push_back(str[i]);
                rec(len+1,digi,temp,mp);
                temp.pop_back();
            }
        
    }
    
    vector<string> letterCombinations(string digits) {
       if(digits.length()==0){
           return {};
       }
       unordered_map<char,string>mlp;
       mlp['2']="abc";
       mlp['3']="def";
       mlp['4']="ghi";
       mlp['5']="jkl";
       mlp['6']="mno";
       mlp['7']="pqrs";
       mlp['8']="tuv";
       mlp['9']="wxyz";
       string temp="";
       rec(0,digits,temp,mlp);
       return sol;
    }
};