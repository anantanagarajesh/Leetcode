class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(),sum=0;
        for(int i=0;i<n;i++){
            if(grid[i][0]==0){
                for(int j=0;j<grid[i].size();j++){
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        for (int j = 0; j < grid[0].size(); j++) {
            int countOnes = 0;
            for (int i = 0; i < n; i++) {
                countOnes += grid[i][j];
            }
            if (countOnes < n - countOnes) { 
                for (int i = 0; i < n; i++) {
                    grid[i][j] = 1 - grid[i][j]; 
                }
            }
        }
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=0;j<grid[i].size();j++){
                k= k*2 + grid[i][j];
            }
            sum+=k;
        }
        return sum;
    }
};