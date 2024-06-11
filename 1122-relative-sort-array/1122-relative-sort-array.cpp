class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int num:arr1)
            mp[num]++;
        for(int num:arr2){
            while(mp[num]){
                ans.push_back(num);
                mp[num]--;
            }
        }
        std::map<int, int> sorted_mp(mp.begin(),mp.end());
        for(auto it=sorted_mp.begin();it!=sorted_mp.end();++it){
            while(it->second){
                ans.push_back(it->first);
                it->second--;
            }
        }
        return ans;
    }
};