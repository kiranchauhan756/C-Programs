     #include<stdio.h>
     #include<string.h>
     void main(){  
        char ch[100];
    scanf("%s",ch);
    int l=strlen(ch);
    for(int i=1;i<l;i++){
        printf("%c",ch[i]);
            printf("[%c]",ch[i]);
    }
    }