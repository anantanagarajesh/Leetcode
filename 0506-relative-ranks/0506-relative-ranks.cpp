class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>arr=score;
        map<int,int>mp;
        vector<string>rank;
        int n=score.size();
        sort(arr.begin(),arr.end(),greater<int>());
        
        for(int i=0;i<n;i++){
            mp[arr[i]]=i+1;
        }
        for(int i:score){
            if(mp.find(i)!=mp.end()){
                if(mp[i]==1)
                    rank.push_back("Gold Medal");
                else if(mp[i]==2)
                    rank.push_back("Silver Medal");
                else if(mp[i]==3)
                    rank.push_back("Bronze Medal");
                else{
                    rank.push_back(to_string(mp[i]));
                }
            }
        }
        return rank;
    }
};