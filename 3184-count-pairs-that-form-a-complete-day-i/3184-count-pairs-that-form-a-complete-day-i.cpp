class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int days=0,n=hours.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((hours[i]+hours[j])%24==0)
                    days++;
            }
        }
        return days;
    }
};