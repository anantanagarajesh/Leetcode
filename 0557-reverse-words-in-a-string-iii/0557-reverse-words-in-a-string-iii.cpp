class Solution {
public:
    string reverseWords(string s) {
        stack<int>st;
        int k=0;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                st.push(s[i]);
            }
            else{
                while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }   
                ans+=' ';
            }
        }
        while(!st.empty()){
                    ans+=st.top();
                    st.pop();
                }
        return ans;
    }
};