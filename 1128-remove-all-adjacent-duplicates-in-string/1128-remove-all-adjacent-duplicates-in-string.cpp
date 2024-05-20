class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (st.empty()) {
                st.push(ch);
            } else if (st.top() == ch) {
                st.pop();
            } else {
                st.push(ch);
            }
        }
        string str;
        while (!st.empty()) {
            str = st.top() + str;
            st.pop();
        }
        return str;
    }
};