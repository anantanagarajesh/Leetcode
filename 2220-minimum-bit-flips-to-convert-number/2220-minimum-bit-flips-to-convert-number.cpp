class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=0,k=0,count=0;
        start^=x;
        goal^=k;
        while(start>0 || goal>0){
            if((start&1)!=(goal&1))
                count++;
            start>>=1;
            goal>>=1;
        }
        return count;
    }
};