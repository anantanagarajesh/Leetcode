class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,j=height.size()-1,sum=0;
        int leftmax=height[i],rightmax=height[j];
        while(i<j){
            if(leftmax<=rightmax){
                sum+=(leftmax-height[i]);
                i++;
                leftmax=max(leftmax,height[i]);
            }
            else{
                sum+=(rightmax-height[j]);
                j--;
                rightmax=max(rightmax,height[j]);
            }
        }
        return sum;
    }
};