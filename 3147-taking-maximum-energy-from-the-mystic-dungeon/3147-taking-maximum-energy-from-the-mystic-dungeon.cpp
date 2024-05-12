class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int maxi=INT_MIN,n=energy.size();
        vector<int>dp(n,0);
        for(int i=0;i<k;i++){
            for(int j=i;j<n;j+=k){
                dp[i]+=energy[j];
            }    
        }
        for(int i=k;i<n;i++){
            dp[i]=dp[i-k]-energy[i-k];
        }
        return *max_element(dp.begin(),dp.end());
    }
};