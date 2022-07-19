#include<stdio.h>
#include<stdlib.h>

void main{
    
    int a[100][100],b[100][100],c[100][100];
    int r1,c1,r2,c2;
    printf("Enter your rows and col for ist\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter your rows and col for iind\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=c2){
        printf("Mul nt possible");
        exit(0);
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            a[i][j]=scanf("%d",&a[i][j]);
        }
    }
        for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            b[i][j]=scanf("%d",&b[i][j]);
        }
    }
        for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
       c[i][j]=0;
       for(int k=0;k<r2;k++){
           c[i][j]+=a[i][k]*b[j][k];
       }
        }
    }
        for(int i=0;i<r1;i++){
        for(int j=0;j<r2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}