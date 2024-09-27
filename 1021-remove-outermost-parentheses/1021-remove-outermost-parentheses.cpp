class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res="";
        for(int i=0;i<s.length();i++){
            if(!st.empty() && s[i]=='('){
                res+=s[i];
            }
            if(s[i]=='('){
                st.push(s[i]);
            }
            
            if(!st.empty() && s[i]==')'){
                st.pop();
                res+=s[i];
            }
            if(st.empty())
                res.pop_back();
        }
        return res;
    }
};