class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int i=0,n=nums.size(),j=nums.size()-1;
        vector<double>averages;
        sort(nums.begin(),nums.end());
        while(i<j){
            double l=nums[i],r=nums[j];
            averages.push_back((l+r)/2);
            i++;
            j--;
            cout<<averages.back();
            
        }
        double mini=*min_element(averages.begin(),averages.end());
        return mini;
    }
};