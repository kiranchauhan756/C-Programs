#include<stdio.h>
#include<string.h>
void main(){
    char s[100],t[100];  
    scanf("%s%s",s,t); 
    int l=strlen(s);
    int m=strlen(t);  
    int k=0;
     while(k<=m){
     for(int i=0;i<l;i++){
     if(t[k]==s[i]){
         if(t[k]!=t[k+1])
     printf("%c",t[k]);
     }
     }
     k++;
     }

}