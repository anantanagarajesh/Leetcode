class Solution {
public:
    int minPartitions(string str) {
        int i=0,maxi=0;
        while(i<str.length()){
            int rem=str[i]-'0';
            if(rem>maxi)
                maxi=rem;
            i++;
        }
        return maxi;
    }
};