#include<stdio.h>
int fun(int,int*);
int  main(){
    int a=10,*ptr;
    
    fun(a,ptr);
return 0;
}
int fun(int a,int *ptr){
   ptr=&a;//stores the address of a
   printf("address of the variable a in memory %x\n\n",ptr);//x print value in hexadecimal form
   printf("address of the variable a in memory %p\n\n",&ptr);//this shows the address of pointer
   printf("value of the variable a in memory %d\n\n",*ptr);//this print the value of a
   printf("size of the variable ptr in memory %d",sizeof(*ptr));
   //in 16,32,64 bit processor the size of pointer is 2,4,8 respectively
   
   
    return 0;
}