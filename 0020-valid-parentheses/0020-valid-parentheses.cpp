class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto x : s) {
            if (x == '(' or x == '[' or x == '{') {
                st.push(x);
            } else {
              
                if (!st.empty() and st.top() == '(' and x == ')')
                    st.pop();
                else if (!st.empty() and st.top() == '[' and x == ']')
                    st.pop();
                else if (!st.empty() and st.top() == '{' and x == '}')
                    st.pop();
                else
                    return false; 
            }
        }
        return st.empty();
    }
};