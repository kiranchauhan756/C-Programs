#include<stdio.h>
void InputArray(int a[2][2],int b[2][2]);
void OutputArray(int a[2][2],int b[2][2]);
void MulArray(int a[2][2],int b[2][2],int c[2][2]);
void DisplayMul(int c[2][2]);
void main(){
int a[2][2];
int b[2][2];
int c[2][2];
InputArray(a,b);
OutputArray(a,b);
MulArray(a,b,c);
DisplayMul(c);
}
void InputArray(int a[2][2],int b[2][2]){
    int i,j;
    printf("Enter array1 ele\n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    printf("Enter array2 ele\n");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);
}
void OutputArray(int a[2][2],int b[2][2]){
    int i,j;
    printf("matrix1 is:\n");
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    printf("matrix2 is:\n");
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    printf("%d ",b[i][j]);
    }
    printf("\n");
    }
}
void MulArray(int a[2][2],int b[2][2],int c[2][2]){
    int i,j,k;
      for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        c[i][j]=0;
        for(k=0;k<2;k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
}}
}
void DisplayMul(int c[2][2]){
    int i,j;
    printf("Multiplication is:\n");
     for(i=0;i<2;i++){
    for(j=0;j<2;j++){
   printf("%d ",c[i][j]);
}
printf("\n");
     }
}