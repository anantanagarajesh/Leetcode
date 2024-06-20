class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        
        int l=1,r=position.back()-position[0];
        int ans=-1;
        
        while(l<=r){
            int mid=l+(r-l)/2;
            int dist=position[0],balls=1;
            for(int i=0;i<position.size();i++){
                if(position[i]-dist>=mid){
                    dist=position[i];
                    balls++;
                }
            }
            if(balls>=m){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};