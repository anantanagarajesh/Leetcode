class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i=0,n=s.length();
        while(n!=0){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if(s[i]=='}'&& !st.empty() && st.top()=='{')
                st.pop();
            else if(s[i]==')'&& !st.empty() && st.top()=='(')
                st.pop();
            else if(s[i]==']'&& !st.empty() && st.top()=='[')
                st.pop();
            else return false;
            i++;
            n--;
        }
        if(!st.empty())
            return false;
        return true;
    }
};