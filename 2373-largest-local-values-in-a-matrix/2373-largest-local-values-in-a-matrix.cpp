class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        if (n < 3 || grid[0].size() < 3) {
            return {}; 
        }
        vector<vector<int>>ans(n-2,vector<int>(grid[0].size()-2,INT_MIN));
        
        for(int i=0;i<n-2;i++){
            for(int j=0;j<grid[i].size()-2;j++){
                int maxi=INT_MIN;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        if(grid[i+k][j+l]>maxi)
                            maxi=grid[i+k][j+l];
                    }
                }
                ans[i][j]=maxi;
            }
        }
        return ans;
    }
};