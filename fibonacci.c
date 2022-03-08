#include<stdio.h>
void main(){
   int n,a=1,b=0,c;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       c=a+b;
       printf("%d\t",c);
       a=b;
       b=c;
   } 
}