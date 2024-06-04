class Solution {
public:
    int longestPalindrome(string s) {
        int a[26]={0},b[26]={0},sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                a[s[i]-'a']++;
            }
            else {
                b[s[i]-'A']++;
            }
        }
        for(int i=0;i<26;i++){
            if(a[i]%2==0)
                sum=sum+a[i];
            else{
                sum=sum+a[i]-1;
            }
            if(b[i]%2==0)
                sum=sum+b[i];
            else{
                sum=sum+b[i]-1;
            }
        }
        if(sum<s.length())
            return sum+1;
        return sum;
    }
};