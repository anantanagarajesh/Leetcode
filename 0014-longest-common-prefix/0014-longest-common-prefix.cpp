class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int j;
        for(int i=0;i<strs[0].length();i++){
            char a=strs[0][i];
            for(j=0;j<strs.size();j++){
                if(a!=strs[j][i])
                    break;
            }
            if(j==strs.size())
                ans+=a;
            else break;
        }
        return ans;
    }
};