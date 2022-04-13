#include<stdio.h>
#include<stdlib.h>
//here it is nt possible to return two or more variables
void MinMax(int arr[],int len,int *max,int *min){
    *min=*max=arr[0];//but here changing the actual values
    for(int i=0;i<len;i++){
        if(arr[i]<*min){
            *min=arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }//by using the pointers the values are getting updated in the main function
    
}

void main(){
    int min,max;//actual values 
 int arr[]={70,67,90,65,13,27};//size in m/m=24
 int len=sizeof(arr)/sizeof(arr[0]);
 printf("length of the array =%d\n",len);
 MinMax(arr,len,&max,&min);
printf("Max element=%d\n",max);
printf("Min ele=%d",min);

}