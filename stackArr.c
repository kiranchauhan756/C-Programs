#include<stdio.h>
#include<stdlib.h>

#define MAX 3

typedef struct stack_type{
    int a[MAX];
    int top;
}stack;

int isFull(stack t){
if(t.top==MAX-1){
    return 1;
}
return 0;
}

int isEmpty(stack t){
    if(t.top==-1){
        return 1;
    }
    return 0;
}

void Insert(stack *t,int data){
    if(t->top==-1){
        t->top=0;
    }
    else{
        t->top++;
    }
    t->a[t->top]=data;
}

void traverse(stack t){
    for(int i=t.top;i>=0;i--){
        printf("%d\n",t.a[i]);
    }
}

void  delete(stack *t){

t->top=t->top-1;

}

void main(){
    stack t;
    t.top=-1;
    int choice,data;
    while(1){
        printf("Enter ur choice\n\
        1 for Insertion\n\
        2 for showing the values\n\
        3 for deletion \n\
        4.for exit\n");
        scanf("%d",&choice);
        switch(choice){
         case 1:
         if(isFull(t)){
             printf("Stack Is Full\n");
         }
         else{
             printf("Enter the data\n");
             scanf("%d",&data);
             Insert(&t,data);
         }
         break;

         case 2:
         if(isEmpty(t)){
             printf("Stack is Empty\n");
         }
         else{
             traverse(t);
         }
         break;

         case 3:
        if(isEmpty(t)){
            printf("Stack is Empty\n");
        }
        else{
            delete(&t);
        }
        break;

        case 4:
        exit(0);
        break;

        default:
        printf("Invalid Choice\n");
        break;
        }
    }
}
