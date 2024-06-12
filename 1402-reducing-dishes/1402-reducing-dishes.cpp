class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        vector<int>ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            int sum=0;;
            int cnt=0;
            for(int j=i;j<n;j++){
                sum=sum+(cnt+1)*s[j];
                cnt++;
            }
            ans.push_back(sum);
            cout<<sum<<endl;
        }
        int maxi=*max_element(ans.begin(),ans.end());
        if(maxi<0)
            return 0;
        return maxi;
    }
};