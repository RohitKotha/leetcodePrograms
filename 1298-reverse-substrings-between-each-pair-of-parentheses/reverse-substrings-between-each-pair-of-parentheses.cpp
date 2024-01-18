    
class Solution {
public:
    string reverseParentheses(std::string s) {
        std::stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == ')') {
                std::queue<char> q;

                while (st.top() != '(') {
                    q.push(st.top());
                    st.pop();
                }

                st.pop();

                while (!q.empty()) {
                    st.push(q.front());
                    q.pop();
                }
            } else {
                st.push(ch);
            }
        }

        std::string ans(st.size(), ' ');
        int i = ans.length() - 1;

        while (!st.empty()) {
            ans[i--] = st.top();
            st.pop();
        }

        return ans;
    }
};



