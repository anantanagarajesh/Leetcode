class Solution {
public:
    int minimumChairs(string s) {
        stack<char>st;
        int maxi=0;
        for(auto chair:s){
            if(chair=='E')
                st.push(chair);
            int a=st.size();
            maxi=max(maxi,a);
            if(chair=='L')
                st.pop();
        }
        return maxi;
    }
};