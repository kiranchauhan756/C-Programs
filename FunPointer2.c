#include<stdio.h>
int *fun(int *l,int *m){
    return (int*)(*l+*m);
}

void main(){
int l=10,m=20;
int *ptr=fun(&l,&m);
printf("%d",l+m);
}