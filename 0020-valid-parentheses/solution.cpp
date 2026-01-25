class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> ls{
            {'(', ')'},
            {'{', '}'},
            {'[', ']'},
        };

        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ls.find(ch) != ls.end()) {
                st.push(ch);
            }
            else {
                if (st.empty()) return false;   

                char topChar = st.top();
                st.pop();

                if (ls[topChar] != ch) {
                    return false;            
        }}}
        return st.empty();
    }
};
