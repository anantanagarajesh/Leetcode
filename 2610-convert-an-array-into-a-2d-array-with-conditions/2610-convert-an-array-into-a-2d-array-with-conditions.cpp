class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxfreq=0;
        
        for(auto p:mp){
            if(p.second>maxfreq)
                maxfreq=p.second;
        }
        vector<vector<int>>ans(maxfreq,vector<int>());
        
        for(auto p:mp){
            int num=p.first;
            int count=p.second;
            for(int i=0;i<count;i++){
                ans[i].push_back(num);
            }
        }
        
        return ans;
    }
};