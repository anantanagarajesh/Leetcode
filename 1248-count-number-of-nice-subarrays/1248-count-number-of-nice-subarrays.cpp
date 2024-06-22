class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0,sum=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]%2;
        }
        vector<int>prefix(n+1);
        prefix[0]=1;

        while(i<n){
            sum+=nums[i];
            if(sum>=k)
                ans+=prefix[sum-k];
            prefix[sum]++;
            i++;
        }
        return ans;
    }
};