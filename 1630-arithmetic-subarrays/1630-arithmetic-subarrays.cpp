class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m=l.size();
        vector<bool>res;
        for(int i=0;i<m;i++){
            int a=l[i],b=r[i];
            vector<int>arr;
            for(int j=a;j<=b;j++){
                arr.push_back(nums[j]);
            }
            sort(arr.begin(),arr.end());
            int diff=arr[1]-arr[0],k=0;
            for(k=0;k<arr.size()-1;k++){
                if(arr[k+1]-arr[k]!=diff){
                    res.push_back(false);
                    break;
                }
            }if(k==arr.size()-1)
                res.push_back(true);
        }
        return res;
    }
};