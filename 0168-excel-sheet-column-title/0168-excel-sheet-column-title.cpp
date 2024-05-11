class Solution {
public:
    
    string convertToTitle(int columnNumber) {
     
        int i=1,n=columnNumber,rem;
        string s= "";

        while(n>0){
            rem=(n-1)%26;
            s+='A'+rem;
            n=(n-1)/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};