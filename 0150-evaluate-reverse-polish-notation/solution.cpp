class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        auto isOperator = [](const string& s) {
            return s== "+" || s=="-" || s=="*" || s=="/";
        };
        for (const string& token:tokens) {
            if (isOperator(token)) {
                int val2=st.top();st.pop();
                int val1= st.top();st.pop();
                if (token =="+") st.push(val1+val2);
                else if (token== "-") st.push(val1 -val2);
                else if (token == "*") st.push(val1 * val2);
                else if (token == "/") st.push(val1/val2);
            } 
            else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
