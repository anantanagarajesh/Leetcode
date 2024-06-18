class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>a;
        int prof=0,maxi=0,j=0;
        for(int i=0;i<difficulty.size();i++){
            a.push_back({difficulty[i],profit[i]});
        }
        sort(a.begin(),a.end());
        sort(worker.begin(),worker.end());
        for(int i=0;i<worker.size();i++){
            while(j<a.size() && worker[i]>=a[j].first){
                maxi=max(maxi,a[j].second);
                j++;
            }
            prof+=maxi;
        }
        return prof;
    }
};