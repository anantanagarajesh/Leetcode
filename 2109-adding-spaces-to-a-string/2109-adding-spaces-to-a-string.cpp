class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int k=0;
        for(int i=0;i<s.length();i++){
            if(k<spaces.size() && spaces[k]==i){
                ans+=' ';
                i--;
                k++;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};