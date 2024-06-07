class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int k:nums)
            mp[k]++;
        for(int k:nums){
            int sum=0;
            while(k>0){
                int rem=k%10;
                sum=sum*10+rem;
                k=k/10;
            }
            ans.push_back(sum);
        }
        for(int k:ans)
            mp[k]++;
        return mp.size();
    }
};