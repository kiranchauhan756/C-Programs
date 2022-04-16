//program to find size of structure 
#include<stdio.h>
//24 doubt
typedef struct Emp{
        int x;//4
        double z;//8
        short int y;//2
}emp;

void main(){
    emp e1,e2;
    printf("size of structure is :\n");
    printf("%d %d %d %d",sizeof(struct Emp),sizeof(e1.x),sizeof(e1.z),sizeof(e1.y));
    
}