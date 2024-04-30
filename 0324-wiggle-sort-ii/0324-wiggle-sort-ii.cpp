class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>arr=nums;
        int j=0,n=nums.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
        if (i % 2 == 0) 
            nums[i] = arr[(n - 1) / 2 - i / 2];
        else  nums[i] = arr[n - 1 - i / 2];     
        }
    }
};