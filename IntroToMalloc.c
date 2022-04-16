#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,a,i;
    scanf("%d",&a);
    ptr=(int*)malloc(a*sizeof(int));
    for(i=0;i<a;i++)
    scanf("%d",(ptr+i));
    for(i=0;i<a;i++)
    printf("%d\n",*(ptr+i));
    free(ptr);
    ptr=(int*)calloc(a,sizeof(int));
    for(i=0;i<a;i++)
    scanf("%d",&ptr+i);
    for(i=0;i<a;i++)
    printf("%d\n",*(ptr+i));
    return 0;

}