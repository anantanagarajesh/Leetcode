class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        long long count=0,res=0.5*n*(n-1);
        unordered_map<long,long>mp;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-i;
            count=count+mp[nums[i]];
            mp[nums[i]]++;
        }
        return res-count;
    }
};