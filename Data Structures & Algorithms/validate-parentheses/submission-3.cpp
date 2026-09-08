class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        // int status = 0; // 1 for '()', 2 for '[]', 3 for '{}'
        for (char c : s) {
            if ((c == '(' || c == '[' || c == '{')) {
                st.push(c); 
            } else if ((c == ')') || (c == ']') || (c == '}')) {
                if (!st.empty()) {
                    char lastChar = st.top();
                } else {
                    return false;
                }
                if ((c == ')' && lastChar == '(') || 
                    (c == ']' && lastChar == '[') || 
                    (c == '}' &&  lastChar == '{')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }


        if (!st.empty()) return false;
        return true;
    }
};
