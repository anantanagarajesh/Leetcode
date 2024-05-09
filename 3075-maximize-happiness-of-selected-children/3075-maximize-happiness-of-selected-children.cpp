class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0,dec=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        for(int i=0;i<k;i++){
            int val=happiness[i]-dec;
            dec++;
            if(val>0){
                sum+=val;
            }
        }
        
        return sum;
    }
};