class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        st.push(s[0]);
        for(int i=1;i<n;i++){
            if(s[i]=='(' || s[i]=='{'||s[i]=='[') st.push(s[i]); 
            else {
                if(st.empty()) return false;
                if((s[i] == '}' && st.top()=='{' )|| (s[i]==')'&& st.top()=='(') || (s[i] == ']' && st.top()=='[')) st.pop();
           
            else return false;
            }

        }

        return st.empty();
    }
};