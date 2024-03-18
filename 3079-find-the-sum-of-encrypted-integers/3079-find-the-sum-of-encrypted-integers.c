int sumOfEncryptedInt(int* nums, int numsSize) {
    int rem,max=0,sum=0,j;
    for(int i=0;i<numsSize;i++){
        j=0;
        max=0;
        while(nums[i]>0){
            rem=0;
            rem=nums[i]%10;
            if(rem>max)
                max=rem;
            j++;
            nums[i]/=10;
        }
        j-=1;
        while(j>=0){
            nums[i]=nums[i]+max*pow(10,j);
                j--;
        }
  }
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    return sum;
    
}