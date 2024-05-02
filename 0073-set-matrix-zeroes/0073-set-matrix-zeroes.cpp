class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>>st;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0)
                    st.insert({i,j});
            }
        }
        for(auto it=st.begin();it!=st.end();++it){
            int row=it->first;
            int col=it->second;
            
            for(int j=0;j<matrix[row].size();j++){
                matrix[row][j]=0;
            }
            for(int i=0;i<matrix.size();i++){
                matrix[i][col]=0;
            }
        }
    }
};