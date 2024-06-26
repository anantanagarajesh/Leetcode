class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int unique=nums[0];
        if(nums.size()==1)
            return unique;
        if(unique!=nums[1])
            return unique;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1])
                return nums[i];
        }
        return nums[nums.size()-1];
    }
};