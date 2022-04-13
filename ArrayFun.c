#include<stdio.h>
//Passing arrays to a function
void input(int arr[],int n);
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
}
void input(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d\n",arr[i]);
    }
}