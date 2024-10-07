class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int ans = 0;

        for (char c : s) {
            if (st.empty()) {
                st.push(c);
            } else if ((st.top() == 'A' && c == 'B') || (st.top() == 'C' && c == 'D')) {
                ans++;  
                st.pop(); 
            } else {
                st.push(c);
            }
        }
        
        
        return s.size() - ans * 2; 
    }
};
