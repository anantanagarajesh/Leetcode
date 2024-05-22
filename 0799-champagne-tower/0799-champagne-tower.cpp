class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>tower(query_row+1,vector<double>(query_row+1,0));
        tower[0][0]=poured;
        for(int i=0;i<query_row;i++){
            for(int j=0;j<=min(i,query_row+1);j++){
                double mini=max(0.0,tower[i][j]-1)/2.0;
                tower[i+1][j]+=mini;
                tower[i+1][j+1]+=mini;
            }
        }
        return min(1.0,tower[query_row][query_glass]);
    }
};