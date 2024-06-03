class Solution {
public:
    int appendCharacters(string s, string t) {
        int m=t.length(),n=s.length(),j=0,ind=-1,count=0;
        for(int i=0;i<m;i++){
            for(j=ind+1;j<n;j++){
                if(t[i]==s[j]){
                    ind=j;
                    count++;
                    break;
                }  
            }
            if(j==n)  
                return m-count;
        }
        return m-count;
    }
};