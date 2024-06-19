class Solution {
public:
    int n;
    bool f(int d,vector<int>& bloomDay, int m, int k){
        int len=0,boquet=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=d){
                len++;
                if(len==k){
                    boquet++;
                    len=0;
                }
            }
            else len=0;
            
        }
        return boquet>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        n=bloomDay.size();
        auto [x0,xn]=minmax_element(bloomDay.begin(),bloomDay.end());
        if ((long long)m * k > n) return -1;
        int l=*x0,r=*xn,mid;
        
        while(l<r){
            mid=l+(r-l)/2;
            
            if(f(mid,bloomDay,m,k))
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};