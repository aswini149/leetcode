class Solution {
public:
    int longestValidParentheses(string s) {
        int maxLen = 0;
        stack<int> st;
        st.push(-1);

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (c == '(') {
                st.push(i);
            } else {
                stack<int> temp = st;
                //cout << "stack ";
                while (!temp.empty()) {
                    //cout << temp.top() << " ";
                    temp.pop();
                }
                //cout << endl;

                st.pop();

                if (st.empty()) {
                    st.push(i);
                } else {
                    maxLen = max(maxLen, i - st.top());
                }
            }
        }

        return maxLen;
    }
};