#include<stdio.h>

//Program for Bubble Sort
//best case o(n)
//avg and worst case o(n^2)
void Insertion(int a[],int n){
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void Bubblesort(int a[],int n){
int temp,flag=1;
for(int i=0;i<n-1 && flag ;i++){
    flag=0;
    for(int j=0;j<n-i-1;j++){
    if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        flag=1;
    }
    }
}
}
void Print(int a[],int n){
    printf("The Sorted array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void main(){
    int a[100],n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    Insertion(a,n);
    Bubblesort(a,n);
    Print(a,n);
}
