#include<stdio.h>
void add(int n,int m,int r);
void sub(int n,int m,int r);
void mul(int n,int m,int r);
void div(int n,int m,int r);
void divr(int n,int m,int r);
void main(){
    int ch,n,m,r;
    printf("Enter your choice : 1.Addition \n2.Subtraction\n3.Multiplication\n4.Division\n5.Division rem\n");
    scanf("%d",&ch);
    if(ch>=1 && ch<=5){
    printf("Enter the two num to be operated\n");
        scanf("%d%d",&n,&m);
    }
    else
    printf("invalid choice\n");
  switch(ch){
      case 1:
        add(n,m,r);
        break;
   case 2:
        sub(n,m,r);
        break;
        case 3:
        mul(n,m,r);
        break;
   case 4:
        div(n,m,r);
        break;
   case 5:
        divr(n,m,r);
        break;  
  }}
  void add(int n,int m,int r){
      r=n+m;
      printf("Addition:=%d",r); 
}
  void sub(int n,int m,int r){
      r=n-m;
      printf("Subtraction:=%d",r); 
}
void mul(int n,int m,int r){
      r=n*m;
      printf("Multiplication:=%d",r); 
}
void div(int n,int m,int r){
      r=n/m;
      printf("Division:=%d",r); 
}
void divr(int n,int m,int r){
      r=n%m;
      printf("Division Rem:=%d",r); 
}