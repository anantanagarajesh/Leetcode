int max(int a,int b){
    if(a > b)
        return a;
    return b;
}
int maxSubArray(int* nums, int numsSize) {
    int sum[numsSize];
    sum[0]=nums[0];
    printf("%d ",sum[0]);
    for(int i=1;i<numsSize;i++){
        sum[i]=max(nums[i],sum[i-1]+nums[i]);
        printf("%d ",sum[i]);
    }
    int maxi=sum[0];
    for(int i=0;i<numsSize;i++){
        if(sum[i]>maxi)
            maxi=sum[i];
    }
    return maxi;
}