class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int n=strs[0].length();
        int m=strs.size();
        for(int i=0;i<n;i++){
            int j=0; 
            for(j=0;j<m-1;j++){
                if(strs[j][i]==strs[j+1][i])
                    continue;
                else break;
            }
            if(j==m-1)
                ans+=strs[j][i];
            else break;
                
        }
        return ans;
    }
};