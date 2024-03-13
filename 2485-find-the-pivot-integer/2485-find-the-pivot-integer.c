int pivotInteger(int n) {
    int sum1=0,sum2=0;
    for(int i=1;i<=n/2;i++){
        sum1+=i;
    }
    for(int j=n/2;j<=n;j++){
        sum2+=j;
    }
    for(int j=n/2+1;j<=n;j++){
        sum1=sum1+j;
        sum2=sum2-j+1;
        if(sum1==sum2)
            return j;
    }
    return -1;
    
}