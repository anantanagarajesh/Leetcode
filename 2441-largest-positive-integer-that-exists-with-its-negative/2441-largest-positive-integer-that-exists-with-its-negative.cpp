class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<0)
                    continue;
                if(nums[i]==(-1*nums[j]))
                    return nums[j];
            }
        }
        return -1;
    }
};