class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        int n=nums.size(),index=0;
        for(int i=0;i<n;i++){
            if(index<2 || nums[i]!=nums[index-2]){
                nums[index++]=nums[i];
            }
        }
        return index;
    }
};