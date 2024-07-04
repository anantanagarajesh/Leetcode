class Solution {
public:
    bool check(vector<int>& piles, int h,int mid){
        int hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=piles[i]/mid;
            if(piles[i]%mid!=0)
                hours++;
        }
        return hours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long r=10e9,mid;
        int l=1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(check(piles,h,mid)){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};