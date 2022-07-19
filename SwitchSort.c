#include<stdio.h>
//Program for Bubble ,Insertion And Selection Sort

void InsertEle(int a[],int n){
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

void Bubblesort(int a[],int n){
        printf("Sorting by BubbleSort\n");
    int temp,flag=1;
    for(int i=0;i<n-1 && flag;i++){
        flag=0;
        for(int j=0;j<n-i-1;j++){ //every tym the loop of j is running -1 from before
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
    }
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void SelectionSort(int a[],int n){
        printf("Sorting by SelectionSort\n");
    int i,j;
   for (j = 0; j < n ; j++) {
    int min = j;
    for (i = j + 1; i < n; i++) {
      if (a[i] < a[min])
	min =i;
    }
    swap(&a[min], &a[j]);
   }
}

void InsertionSort(int a[],int n){
    printf("Sorting by InsertionSort\n");
    int temp,i,j;
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

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void main(){
    int a[100],n,choice;
    printf("Enter your Choice\n\
    1.Bubble Sorting\n\
    2.selection Sorting\n\
    3.Insertion Soring\n");
    scanf("%d",&choice);
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    InsertEle(a,n);

    switch(choice){
        case 1:
            Bubblesort(a,n);
             Print(a,n);
             break;

         case 2:   
          SelectionSort(a,n);
            Print(a,n); 
            break;

            case 3:
            InsertionSort(a,n);
            Print(a,n);
            break;
    }
}