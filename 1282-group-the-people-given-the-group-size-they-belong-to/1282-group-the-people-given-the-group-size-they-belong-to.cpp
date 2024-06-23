class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>>ans;
        int n=g.size();
        for(int i=0;i<n;i++){
            int k=g[i];
            vector<int>a;
            int j=i;
            int cnt=0;
            while(cnt<k && j<n){
                if(g[j]==k){
                    cnt++;
                    g[j]=-1;
                    a.push_back(j);
                }
                j++;
            }
            if(a.size()!=0)
                ans.push_back(a);
        }
        return ans;
    }
};