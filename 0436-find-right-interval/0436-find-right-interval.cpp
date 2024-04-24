class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int>ans;
        int ind;
        for(int i=0;i<intervals.size();i++){
            int a=intervals[i][1];
            ind=-1;
            int min=INT_MAX;
            for(int j=0;j<intervals.size();j++){
                if(intervals[j][0]>=a && (intervals[j][0]-a)<=min){
                    ind=j;
                    min=intervals[j][0]-a;
                }
            }
            ans.push_back(ind);
        }
        return ans;
    }
};