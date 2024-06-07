class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        set<pair<int,int>>st;
        unordered_map<int,int>mp,res;
        vector<int>ans;
        for(const auto&log:logs)
            st.insert({log[0],log[1]});
        
        for(auto entry:st){
            mp[entry.first]++;
        }
        for(const auto entry:mp){
            res[entry.second]++;
        }
        for(int i=1;i<=k;i++){
            ans.push_back(res[i]);
        }
        return ans;
    }
};