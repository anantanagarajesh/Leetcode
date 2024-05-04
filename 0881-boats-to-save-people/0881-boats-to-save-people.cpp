class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end(),greater<int>());
        int n=people.size();
        int i=0,j=n-1,count=0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                count++;
                j--;
            }
            else if(people[i]<=limit)
                count++;
            i++;
        }
        return count;
    }
};