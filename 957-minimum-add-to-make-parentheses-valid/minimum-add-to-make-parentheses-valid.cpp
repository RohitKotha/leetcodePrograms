class Solution {
public:
    int minAddToMakeValid(string s) {
        int openparen=0,closeparen=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
{
openparen++;
}
else if(s[i]==')' && openparen>0)
{
openparen--;
}
else{
closeparen++;
}
        }
        return closeparen+openparen;
    }
};