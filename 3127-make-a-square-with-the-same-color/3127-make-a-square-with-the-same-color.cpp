class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(grid[i][j]=='B' && grid[i][j+1]=='B'&& grid[i+1][j]=='B' && grid[i+1][j+1]=='B' )
                    return true;
                else if(grid[i][j]=='W' && grid[i][j+1]=='W'&& grid[i+1][j]=='W' && grid[i+1][j+1]=='W' )
                    return true;
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(grid[i][j]=='W' && grid[i][j+1]=='B'&& grid[i+1][j]=='B' && grid[i+1][j+1]=='B' )
                    return true;
                else if(grid[i][j]=='W' && grid[i][j+1]=='W'&& grid[i+1][j]=='W' && grid[i+1][j+1]=='B' )
                    return true;
                else if(grid[i][j]=='W' && grid[i][j+1]=='W'&& grid[i+1][j]=='B' && grid[i+1][j+1]=='W' )
                    return true;
                else if(grid[i][j]=='W' && grid[i][j+1]=='B'&& grid[i+1][j]=='W' && grid[i+1][j+1]=='W' )
                    return true;
                
                else if(grid[i][j]=='B' && grid[i][j+1]=='W'&& grid[i+1][j]=='W' && grid[i+1][j+1]=='W' )
                    return true;
                else if(grid[i][j]=='B' && grid[i][j+1]=='B'&& grid[i+1][j]=='B' && grid[i+1][j+1]=='W' )
                    return true;
                else if(grid[i][j]=='B' && grid[i][j+1]=='B'&& grid[i+1][j]=='W' && grid[i+1][j+1]=='B' )
                    return true;
                else if(grid[i][j]=='B' && grid[i][j+1]=='W'&& grid[i+1][j]=='B' && grid[i+1][j+1]=='B' )
                    return true;
                
            }
        }
        return false;
    }
};