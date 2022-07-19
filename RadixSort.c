//Radix Sort Program
#include<stdio.h>

void main(){
    int arr[10] = {543, 765, 234, 987, 345, 652, 983, 154, 456, 834};
    int curKey[10], count=3, proc[10];
    void countSort(int*, int*, int);
    for(int i=0; i<10; i++) proc[i] = arr[i];

    for(int i=1; i<=count; i++){
        for(int i=0; i<10; i++) curKey[i] = proc[i]%10;
        countSort(arr, curKey, 10);
        for(int i=0; i<10; i++) proc[i] /= 10;
    }
}

void countSort(int *org, int *key, int n){
    int cf[10] = {0}, keySorted[10]={0}, res[10] = {0}, picked[10]={0};
    for(int i=0; i<n; i++) cf[key[i]] += 1;
    for(int i=1; i<10; i++) cf[i] = cf[i] + cf[i-1];
    while(1){
        break;
    }
    for(int i=n-1; i>=0; i--){
        keySorted[cf[key[i]]-1] = key[i];
        cf[key[i]] -= 1;
    }
    for(int j=0; j<n; j++){
        int cur = keySorted[j], prev=-1, cV=1000;
        for(int i=0; i<n; i++){
            if(key[i] == cur && picked[i] == 0 && org[i]<=cV){
                if(prev != -1) picked[i]=0;
                prev = i;
                picked[i]=1;
                res[j] = org[i];
                cV = org[i];
            }
        }
        for(int i=0; i<n; i++) printf("%d ", res[i]);
        printf("\n");
    }
}