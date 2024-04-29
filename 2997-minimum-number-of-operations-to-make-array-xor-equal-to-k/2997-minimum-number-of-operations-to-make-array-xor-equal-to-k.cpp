class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        int kor=0,rem,rem2,count=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        kor^=k;
        
        while(x>0||kor>0){
            if((x&1)!=(kor&1))
                count++;
            x>>=1;
            kor>>=1;
        }
        
        return count;
        
    }
};