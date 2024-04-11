class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length()-k,i=0;
        stack<char>st;
        string res;
        for(char c : num){
            while(!st.empty() && c<st.top() && k> 0){
                    st.pop();
                    
                    k--;
                }
            st.push(c);   
        }
        for(int i=0;i<k;i++){
            st.pop();
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        while(res[i]=='0')
            i++;
        res.erase(0,i);
        if(res.size()==0)
            return "0";
        
        return res;
    }
};