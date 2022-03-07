#include<stdio.h>
#include<string.h>  
void main(){
        char ch[100];
    scanf("%s",ch);
    int l=strlen(ch);
    char a[l],temp;
    for(int i=0;i<l;i++)
    if(ch[i]>=65 && ch[i]<=90)
    a[i]=ch[i];

}