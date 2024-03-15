/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* a=(int*)malloc(numsSize*sizeof(int));
    int* b=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        a[i]=1;
    }
    for(int i=1;i<numsSize;i++){
        a[i]=a[i-1]*nums[i-1];
    }
    for(int i=0;i<numsSize;i++){
        b[i]=1;
    }
    for(int i=numsSize-2;i>=0;i--){
        b[i]=b[i+1]*nums[i+1];
    }
    for(int i=0;i<numsSize;i++){
        a[i]=a[i]*b[i];
    }
    *returnSize=numsSize;
    return a;
    
}