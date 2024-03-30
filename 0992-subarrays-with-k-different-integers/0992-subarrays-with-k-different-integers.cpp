class Solution {
public:
    int slidingWindow(vector<int>&nums,int k){
        int i=0,j=0,n=nums.size(),count=0;
        unordered_map<int,int>mp;
        while(j<n){
            mp[nums[j]]++;
            while(i<=j && mp.size()>k){
                if(--mp[nums[i]]==0)
                    mp.erase(nums[i]);
                i++;
            }
            count=count+j-i+1;
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindow(nums,k)-slidingWindow(nums,k-1);
    }
};