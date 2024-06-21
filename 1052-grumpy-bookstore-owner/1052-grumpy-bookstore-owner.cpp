class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int prev=INT_MIN,ans=0,startind=0;
        for(int i=0;i<grumpy.size()-minutes+1;i++){
            int sum=0;
            for(int j=i;j<i+minutes;j++){
                if(grumpy[j]==1){
                    sum+=customers[j];
                }
            }
            prev=max(sum,prev);
            if(prev==sum){
                startind=i;
            }
        }
        for(int i=startind;i<startind+minutes;i++){
            grumpy[i]=0;
        }
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0){
                ans+=customers[i];
            }
        }
        return ans;
    }
};