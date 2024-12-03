class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string st="";
        int j=0;
        for(int i=0;i<s.size();i++){
            if(j<spaces.size() and i==spaces[j]){
                st+=' ';
                j++;
            }
            st+=s[i];
        }
        return st;
    }
};