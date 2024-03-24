class Solution {
public:
    char findTheDifference(string s, string t) {
        string st=s+t;
        int x=0;
        for(int i=0;i<st.size();i++){
            x^=int(st[i]);
        }
         char character = static_cast<char>(x);
         return character;
    }
};