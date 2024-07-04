class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        int m=edges.size();
        set<int>st;
        vector<int>ans;
        for(int i=0;i<m;i++){
            st.insert(edges[i][1]);
        }
        for(int j=0;j<n;j++){
            if(st.find(j)==st.end())
                ans.push_back(j);
        }
        return ans;     
    }
};