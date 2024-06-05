class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=n/2;
        long long sum=0;
        sum=sum+abs(nums[mid]-k);
        nums[mid]=k;
        for(int i=mid-1;i>=0;i--){
            if(nums[i]>nums[mid]){
                sum+=abs(nums[i]-k);
                nums[i]=nums[i]-abs(nums[i]-k);
            }
            
        }
        for(int i=mid+1;i<n;i++){
            if(nums[i]<nums[mid]){
                sum+=abs(nums[i]-k);
                nums[i]=nums[i]+abs(nums[i]-k);
            }
        }
        return sum;
    }
};