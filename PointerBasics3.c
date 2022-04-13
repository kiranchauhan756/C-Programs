#include<stdio.h>
void main(){
    int a[]={10,90,89,12,90};
    int *p;
    //this denotes array name is address to first element of array
    printf("%d\n",*(a+1));
    //reversing the elements of array using pointers
    printf("Reverse of array:\n");
    for( p=&a[4];p>=&a[0];p--)
    printf("%d\n",*p);

}