#include <iostream>
#include <stack>
#include <vector>

class Solution {
public:
    std::string reverseParentheses(std::string s) {
        std::stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == ')') {
                std::vector<char> v;

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

        std::string ans(st.size(), ' ');
        int i = ans.length() - 1;

        while (!st.empty()) {
            ans[i--] = st.top();
            st.pop();
        }

        return ans;
    }
};


