class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); ++i){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else if ((s[i] == ']' || s[i] == '}' || s[i] == ')') && !st.empty()){
                char last = st.top();

                if ((last == '[' && s[i] == ']') || (last == '{' && s[i] == '}') ||
                     (last == '(' && s[i] == ')')){
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }

        return st.empty() ? true : false;
    }
};
