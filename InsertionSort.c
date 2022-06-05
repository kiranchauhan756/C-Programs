//Program for Insertion Sort

#include<stdio.h>

//best case o(n)
//avg and worst case o(n^2)

void InsertEle(int a[],int n){
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void InsertionSort(int a[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

void Print(int a[],int n){
    printf("After Insertion Sort The  array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void main(){
int a[100],n;
printf("Enter the number of elements\n");
scanf("%d",&n);
InsertEle(a,n);
InsertionSort(a,n);
Print(a,n);
}