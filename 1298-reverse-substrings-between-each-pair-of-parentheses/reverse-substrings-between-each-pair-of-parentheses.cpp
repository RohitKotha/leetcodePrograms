
class Solution {
public:
    std::string reverseParentheses(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == ')') {
                vector<char> v;

                while (st.top() != '(') {
                    v.push_back(st.top());
                    st.pop();
                }

                st.pop();

                for (char c : v) {
                    st.push(c);
                }
            } else {
                st.push(ch);
            }
        }

        string ans(st.size(), ' ');
        int i = ans.length() - 1;

        while (!st.empty()) {
            ans[i--] = st.top();
            st.pop();
        }

        return ans;
    }
};


