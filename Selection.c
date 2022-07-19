#include<stdio.h>
//20,35,40,100,3,10,15
//best,worst and average case o(n^2) 
void Insertion(int a[],int n){
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//selection sort works on the minimum element
void SelectionSort(int a[],int n){
    int i,j;
for( i=0;i<n;i++){
    int min=i;
    for( j=i+1;j<n;j++){
     if(a[j]<a[min]){
         min=j;
     }
     
    }
    swap(&a[min],&a[i]);
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
    SelectionSort(a,n);
    Print(a,n);
}
