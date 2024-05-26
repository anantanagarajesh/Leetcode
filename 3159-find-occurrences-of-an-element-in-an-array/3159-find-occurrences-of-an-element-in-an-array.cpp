class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int count=1,ind=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)
            {
                mp[count]=i;
                count++;
            }
            if(count==1)
                ind=i;
        }
        cout<<ind;
        for(int i=0;i<queries.size();i++){
            if(nums[0]==x && queries[i]==1)
                ans.push_back(ind);
            else if(mp[queries[i]])
                ans.push_back(mp[queries[i]]);
            else ans.push_back(-1);
        }
        return ans;
    }
};