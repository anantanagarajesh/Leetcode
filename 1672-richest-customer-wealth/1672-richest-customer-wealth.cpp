class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,maxi=0;
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};