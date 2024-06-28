class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int>rowsum(n,0),colsum(m,0);
        vector<vector<int>>res(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowsum[i]+=grid[i][j];
                colsum[j]+=grid[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i][j]=rowsum[i]+colsum[j]-(n-rowsum[i])-(m-colsum[j]);
            }
        }
      
        return res;
    }
};