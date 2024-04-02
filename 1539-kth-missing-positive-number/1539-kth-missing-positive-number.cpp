class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0,j=1,n=arr.size(),count=0;
        while(count<k){
        
            if(i<n && arr[i]==j){
                i++;
            }
            else count++;
            
            if(count==k){
                return j;
            }
        j++;
        }
        return arr[n-1]-count+k;
    }
};