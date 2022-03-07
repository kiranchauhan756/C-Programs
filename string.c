#include<stdio.h>
#include<string.h>
void main(){
     char ch[100];
    scanf("%s",ch);
    int l=strlen(ch);
    for(int i=1;i<=l;i++){
        if(i%2==0)
        printf("%c",ch[i]);
        else
       printf("[%c]",ch[i]);
    }
}