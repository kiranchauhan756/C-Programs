//Quick Sort

#include<stdio.h>

void quicksort(int arr[25],int first,int last){

int i, j, pivot, temp;

if(first<last){

pivot=last;

i=first;

j=last;

while(i<j){

while(arr[i]<=arr[pivot]&&i<last)

i++;

while(arr[j]>arr[pivot])

j--;

if(i<j){

temp=arr[i];

arr[i]=arr[j];

arr[j]=temp;

}

}

temp=arr[pivot];

arr[pivot]=arr[j];

arr[j]=temp;

quicksort(arr,first,j-1);

quicksort(arr,j+1,last);

}

}

int main(){

int i, num, arr[25];

printf("Enter some elements\n");

scanf("%d",&num);

printf("Enter %d elements: ", num);

for(i=0;i<num;i++)

scanf("%d",&arr[i]);

quicksort(arr,0,num-1);

printf("The Sorted Order is: ");

for(i=0;i<num;i++)

printf(" %d",arr[i]);

return 0;

}

