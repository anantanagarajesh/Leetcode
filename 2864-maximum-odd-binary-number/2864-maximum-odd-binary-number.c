char* maximumOddBinaryNumber(char* s){
    int count=0,c=0;
    int n=strlen(s)+1;
    char *a =(char*)malloc(n*sizeof(char));
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='1')
            count++;
    }
    printf("%d",count);
    for(int i=0;i<count-1;i++){
        a[i]='1';
    }
    for(int i=count-1;i<strlen(s);i++){
        a[i]='0';
    }
    a[strlen(s)-1]='1';
    a[strlen(s)]='\0';
    return a;

}