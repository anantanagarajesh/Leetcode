/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findPeaks(int* mountain, int mountainSize, int* returnSize) {
    int *arr =(int*)malloc(100*sizeof(int));
    int k=0;
    for(int i=1;i<mountainSize-1;i++){
        if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1]){
            arr[k]=i;
            k++;
        }
    }
    *returnSize=k;
    return arr;
}