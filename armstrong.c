//armstrong number between 1 to 1000
#include<stdio.h>
void main(){
    int num,sum,n,count,digit;
    for(num =1;num<=1000;num++){
        sum=0;
        n=num;
        while(n!=0){
            digit=n%10;
            count=digit*digit*digit;
            sum+=count;
            n=n/10;
        }
        if(num==sum)
        printf("%d\n",num);

    }
    
}