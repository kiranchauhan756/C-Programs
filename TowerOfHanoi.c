#include<stdio.h>
void TOH(int n,char x,char y,char z) {
   if(n>0) {
      TOH(n-1,x,z,y);
      printf("\nMove from %c to %c",x,y);
      TOH(n-1,z,y,x);
   }
}
void  main() {
   int n;
   printf("Enter num of disc\n");
   scanf("%d",&n);
   TOH(n,'A','C','B');
}