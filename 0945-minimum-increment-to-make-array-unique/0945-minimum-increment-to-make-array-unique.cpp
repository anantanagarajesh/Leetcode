class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size(),sum=0,mini=0;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            mini=max(mini,nums[i]);
            sum=sum+mini-nums[i];
            mini+=1;
        }
        return sum;
    }
};

