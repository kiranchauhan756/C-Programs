//Maximum element in an array
#include<stdio.h>
 void main(){
     int a[1000],i,n,max;
     printf("enter size of array");
     scanf("%d",&n);
     printf("Enter ele in array\n");
     for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
     }
     max=a[0];
     for(int i=1;i<n;i++){
         if(max<a[i])
         max=a[i];
     }
     printf("\n Maximum of array is: %d",max);
 }

    
