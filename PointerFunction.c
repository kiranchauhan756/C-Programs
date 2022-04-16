#include<stdio.h>
//returning pointers
int  *fun(int a[],int len ){
return &a[len/2];
}

void main(){
    int a[]={78,9,10,24,89};
    int len=sizeof(a)/sizeof(a[0]);
    int *mid=fun(a,len);
    printf("%d\n",*mid);
}