//Max element using function
#include<stdio.h>
void InputArray(int a[4]);
void MaxEle(int a[4]);
void main(){
int a[4];
InputArray(a);
MaxEle(a);
}
void InputArray(int a[4]){
    int i;
    printf("Enter array1 ele\n");
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
}
void MaxEle(int a[4]){
    int max;
    max=a[0];
     for(int i=1;i<4;i++){
         if(max<a[i])
         max=a[i];
     }
     printf(" Maximum of array is: %d",max);
}