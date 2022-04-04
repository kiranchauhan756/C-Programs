//prime number between 1 to 100
#include<stdio.h>
void main(){
   /* int count,a=1,i;
    while(a<=100){
        count=0,i=2;
        while(i<=a/2){
            if(a%i==0){
                count++;
                break;
            }
            i++;
        }
        if(count==0 && a!=1)
        printf("%d\n",a);
        a++;
    }*/
    int n,count=0,i=2;
    scanf("%d",&n);
while(i<=n/2){
            if(n%i==0){
                count++;
                break;
            }
            i++;
        }
        if(count==0 && n!=1)
        printf("yes");
        else
        printf("no");

}