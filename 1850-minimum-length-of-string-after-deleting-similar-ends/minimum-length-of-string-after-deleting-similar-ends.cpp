class Solution {
public:
    int minimumLength(string s) {
        int i=0;
        int j=s.size()-1;
        int ok=0;
        int p=0;
        while(i<j and s[i]==s[j]){
        char ch=s[i];
        while(s[i]==ch and i<=j){
            i++;
        }
        while(s[j]==ch and i<=j){
            j--;
        }
    }
        return j-i+1;
    }
    
};