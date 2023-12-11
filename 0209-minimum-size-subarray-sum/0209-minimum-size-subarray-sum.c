int minimum(int a,int b){
    return a<b?a:b;
}


int minSubArrayLen(int target, int* nums, int numsSize) {
    int left =0, right=0,sum=0,min=100001;
    for(int i=0;i<numsSize;i++){
            sum=sum+nums[i];
        while(sum>=target){
            min = minimum(i-left+1,min);
            sum-=nums[left];
            left++;
        }    
    }
    if(min==100001) return 0;
    return min;
}