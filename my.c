#include<stdio.h>
#include"Storage.c"
int a;//global variable
extern ex;
void main(){
   void f1();
   register r;
   a=5;
   f1();
   f1();
   f1();
   f1();
   printf("\nLocal var=%d",a);
    printf("\nExternal var=%d",a);
     printf("\nValue of register var=%d",a);
}

void f1(){
    static int a=7;
    auto int b=5;
    printf("\n%d\t%d",a,b);
    a++;
    b++;
}