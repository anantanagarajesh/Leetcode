class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long missingno=1;
        int i=0,result=0;
        while(missingno<=n){
            if(i<nums.size() && nums[i]<=missingno){
                missingno+=nums[i];
                i++;
            }
            else{
                missingno+=missingno;
                result++;
            }
        }
        return result;
    }
};