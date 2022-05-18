#include<stdio.h>
//binary serach works on sorted array
void Insert(int a[100],int n){
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
}
void sort(int a[100],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
if(a[j]<a[i]){
    temp=a[j];
    a[j]=a[i];
    a[i]=temp;
    }}
    }
}
void print(int n,int a[100]){
    printf("The array is\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int BinarySearch(int a[100],int l,int r,int item){
  
int middle=l+(r-1)/2;
  if(r>=1){
if(item==a[middle]){
       return middle;
    }
else if(a[middle]>item){
 return  BinarySearch(a,l,middle-1,item);   
 }
   return  BinarySearch(a,middle+1,r,item);      
}
return -1;
}
void main(){
int a[100],n,l,r,item;
printf("Enter the num of elements\n");
scanf("%d",&n);
Insert(a,n);
sort(a,n);
print(n,a);
printf("Enter the element to be searched\n");
scanf("%d",&item);
int res=BinarySearch(a,0,n-1,item);
(res==-1)?printf("Element not found\n"):printf("Element found at index %d\n",res);
}