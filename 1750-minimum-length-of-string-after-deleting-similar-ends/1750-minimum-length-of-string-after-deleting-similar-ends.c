int minimumLength(char* s) {
    int i=0;
    int j=strlen(s)-1;
    while(i<j && s[i]==s[j]){
        char ch=s[i];
        while(i<=j && s[i]==ch){
            i++;
        }
        while(i<=j && s[j]==ch){
            j--;
        }
    }
    return j-i+1;
}