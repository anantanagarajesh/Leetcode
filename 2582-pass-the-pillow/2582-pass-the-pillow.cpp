class Solution {
public:
    int passThePillow(int n, int time) {
        int flag=1,i=1,count=0,ans=0;
            while(time>0){
                time=time-1;
                if(flag){
                    i++;
                }
                else i--;
                ans=i;
                count++;
                if(count==n-1){
                    flag=!flag;
                    count=0;
                }
            }
        return ans;
    }
};