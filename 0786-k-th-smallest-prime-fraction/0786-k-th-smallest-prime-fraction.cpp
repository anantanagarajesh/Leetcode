class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float>frac;
        vector<int>a,b,ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                float x=arr[i];
                frac.push_back(x/arr[j]);
                a.push_back(arr[i]);
                b.push_back(arr[j]);
            }
        }
        sort(frac.begin(),frac.end());
        float val=frac[k-1];
        for(int i=0;i<n*(n-1)/2;i++){
            float y=a[i];
            if(y/b[i]==val){
                ans.push_back(a[i]);
                ans.push_back(b[i]);
            }
        }
        cout<<frac[k-1];
        return ans;
    }
};