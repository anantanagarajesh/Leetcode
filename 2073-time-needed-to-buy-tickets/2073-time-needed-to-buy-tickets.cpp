class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i=0,time=0,n=tickets.size();
        while(tickets[k]>0){
            if(tickets[i]>0){
                tickets[i]-=1;
                time++;
            }
            i=(i+1)%n;
        }
        return time;
    }
};