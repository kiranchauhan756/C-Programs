#include<stdio.h>
#include<string.h>  
void main(){
        char ch[100];
    scanf("%s",ch);
    int l=strlen(ch);
    for(int i=0;i<l;i++){
        if(ch[i]=='.')
         printf("[.]");
        else
        printf("%c",ch[i]);    
    } 
    }