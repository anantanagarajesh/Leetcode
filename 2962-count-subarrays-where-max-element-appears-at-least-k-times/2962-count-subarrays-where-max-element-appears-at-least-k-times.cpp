class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int l=0,r=0,n=nums.size(),count=0;
        long long int num=0;
        int max_ele=*max_element(nums.begin(),nums.end());
        while(r<n){
            if(nums[r]==max_ele)
                count++;
            while(count>=k){
                if(nums[l]==max_ele)
                    count--;
                l++;
                num=num+n-r;
            }
            
            r++;
        }
        return num;
    }
};