class Solution {
public:
    int rom(char ch){
        if(ch=='I'){
            return 1;
        }
        else if(ch=='V'){
            return 5;
        }
        else if(ch=='X'){
            return 10;
        }
        else if(ch=='L'){
            return 50;
        }
        else if(ch=='C'){
            return 100;
        }
        else if(ch=='D'){
            return 500;
        }
        else if(ch=='M'){
            return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int sum=0;
        stack<char>st;
        //st.push(s[0]);
        for (int i = 0; i < s.size(); ++i) {
            if (st.empty() || rom(st.top()) >= rom(s[i])) {
                st.push(s[i]);
            } else {
                sum += rom(s[i]) - rom(st.top());
                st.pop();
            }
        }
        while(!st.empty()){
            sum+=rom(st.top());
            st.pop();
        }
        return sum;
    }
};