class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum=nums[0];
        nums[0]=-1;
        int mini=*min_element(nums.begin()+1,nums.end());
        sort(nums.begin()+1,nums.end());
        
        sum+=mini+nums[2];
        return sum;
    }
};