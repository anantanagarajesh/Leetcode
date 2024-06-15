class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital){
        int n=capital.size();
        vector<pair<int,int>>projects(n);
        for(int i=0;i<n;i++){
            projects[i]={capital[i], profits[i],};
        }
        int i=0;
        sort(projects.begin(),projects.end());
        priority_queue<int>pq;
        while(k>0){
            while(i<n && projects[i].first<=w){
                pq.push(projects[i].second);
                i++;
            }
            if(pq.empty())
                break;
            w+=pq.top();
            pq.pop();
            k--;
        }
    return w;
    }
};