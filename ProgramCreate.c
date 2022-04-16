#include<stdio.h>
#include<stdlib.h>

void main(){
    int i=10;
    int *p,*q;
    p=&i;
    q=p;
    printf("%d\n",&i);
    printf("%d\n",p);
    printf("%d",q);
}