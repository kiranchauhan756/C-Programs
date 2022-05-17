#include<stdio.h>
void Insert(int n,int a[100]){
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void Search(int n,int a[100]){
    int item;
    printf("Enter the element to be searched\n");
    scanf("%d",&item);
    for(int i=0;i<n;i++){
        if(a[i]==item){
            printf("Element found at index %d\n",i);
            break;
        }
        if(i==n-1){
            printf("Element nt found\n");
        }
    }
}
void print(int n,int a[100]){
    printf("The array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void main(){
    int n,a[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    Insert(n,a);
    print(n,a);
    Search(n,a);
}