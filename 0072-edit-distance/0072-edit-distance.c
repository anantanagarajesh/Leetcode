int min(int a,int b, int c){
    if(a<b &&a<c)
        return a;
    if(b<a &&b<c)
        return b;
    return c;
}

int minDistance(char* word1, char* word2) {
    
    if(strlen(word2)==0 && strlen(word1)==0)
        return 0;
    int dp[strlen(word2)+1][strlen(word1)+1];
    
    for(int i=0;i<strlen(word2)+1;i++){
        dp[i][0]=i;
    }
    
    for(int i=0;i<strlen(word1)+1;i++){
        dp[0][i]=i;
    }
    
    for(int i=1;i<strlen(word2)+1;i++){
        for(int j=1;j<strlen(word1)+1;j++){
            if(word2[i-1]!=word1[j-1])
                dp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+1);
            else
                dp[i][j]=dp[i-1][j-1];
        }
    }
    return dp[strlen(word2)][strlen(word1)];
}