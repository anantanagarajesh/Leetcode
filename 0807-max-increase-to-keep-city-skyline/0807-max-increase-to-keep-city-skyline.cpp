class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int x=grid[i][j];
                int maxr=INT_MIN;
                int maxc=INT_MIN;
                for(int k=0;k<n;k++){
                    maxr=max(maxr,grid[i][k]);
                    maxc=max(maxc,grid[k][j]);
                }
                int mini=min(maxr,maxc);
                sum=sum+(mini-x);
            }
        }
        return sum;
    }
};