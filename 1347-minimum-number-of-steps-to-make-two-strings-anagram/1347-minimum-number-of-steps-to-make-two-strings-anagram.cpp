class Solution {
public:
    int minSteps(string s, string t) {
        int a[26],b[26],count=0;
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            a[i]=abs(b[i]-a[i]);
        }
        for(int i=0;i<26;i++){
            if(a[i]!=0)
                count+=a[i];
        }
        return count/2;
    }
};