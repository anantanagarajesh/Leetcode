int minChanges(char* s) {
    int count=0;
    for(int i=0;i<strlen(s)-1;i+=2){
        if((s[i]=='0' && s[i+1]=='1') || (s[i]=='1' && s[i+1]=='0'))
            count+=1;
    }
    return count;
}