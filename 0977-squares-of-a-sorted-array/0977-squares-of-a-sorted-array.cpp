class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len=sizeof(nums)/sizeof(nums[0]);
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        std::sort(nums.begin(),nums.end());

        return nums;
    }
};