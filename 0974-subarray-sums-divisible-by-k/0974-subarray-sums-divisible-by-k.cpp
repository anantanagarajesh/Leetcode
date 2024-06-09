class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),count=0;
        long long sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int num:nums){
            sum+=num;
            int rem=sum%k;
            if(rem<0)
                rem+=k;
            if(mp.find(rem)!=mp.end())
                count=count+mp[rem];
            mp[rem]++;
                
        }
        return count;
    }
};