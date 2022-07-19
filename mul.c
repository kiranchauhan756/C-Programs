#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[100][100],b[100][100],c[100][100];
    int r1,r2,c1,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if(c1!=r2){
                printf("multiplication is nt possible");
                exit(0);
    }
        printf("Enter ele of first matrix\n");
    for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
    }
    }
        printf("Enter ele of second matrix\n");
        for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        scanf("%d",&b[i][j]);
    }
    }
    for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        c[i][j]=0;
        for(int k=0;k<c1;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
    }
    printf("multiplication is\n");
     for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    
    

    
}