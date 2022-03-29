#include<stdio.h>
int func(int a,int b){
    printf("add=%d\n",a+b);

    return 0;
}
void main(){
  int (*fptr)(int,int);//pointer to function
    fptr=func;
    func(2,3);
    fptr(5,1);

}