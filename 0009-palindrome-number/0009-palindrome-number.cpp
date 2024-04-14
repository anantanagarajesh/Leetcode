class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int n=x,rem=0;
        long long sum=0;
        while(n>0){
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
        if(x==sum)
            return true;
        return false;
        
    }
};