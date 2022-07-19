#include<stdio.h>
#define SIZE 5
#define RANGE 5

void main(){
    int arr[SIZE] = {1, 1, 2,1,2};
    int cf[5], res[SIZE];
    void print(int*, int);

    // Print initial array
    print(arr, SIZE);

    // Initialize cf array
    for(int i=0; i<RANGE; i++) cf[i] = 0;

    // Fill cf array
    for(int i=0; i<SIZE; i++) cf[arr[i]-1] += 1;
    for(int i=1; i<RANGE; i++) cf[i] = cf[i] + cf[i-1];

    // Fill resultant array
    for(int i=SIZE-1; i>=0; i--){
        res[cf[arr[i]-1]-1] = arr[i];
        cf[arr[i]-1] -= 1;
    }

    // Print resultant array
    print(res, SIZE);
}

void print(int *a, int n){
    printf("---------------------------------------------\n");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n---------------------------------------------\n");
}