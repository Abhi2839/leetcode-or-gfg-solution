class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto x : s) {
            if (x == '(' or x == '[' or x == '{')
                st.push(x);
            else {
                if (x == ')' and st.top() == '(' and  !st.empty())
                    st.pop();
                else if (st.top() == '[' and x == ']' and !st.empty())
                    st.pop();
                else if (st.top() == '{' and x == '}' and !st.empty())
                    st.pop();
                else
                    return 0;
            }
        }
        return st.empty();
    }
};