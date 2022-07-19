#include<stdio.h>
#include<stdlib.h>

//Stack Using Linked List

typedef struct stack_link{
    int data;
    struct stack_link *next;
}stack;

void insert(stack **t,stack **temp){
    *temp=(stack*)malloc(sizeof(stack));
    printf("Enter the data\n");
    scanf("%d",&(*temp)->data);
        (*temp)->next=*t;
        (*t)=*temp;

}

void traversal(stack *t){
    stack *ptr;
        if(t==NULL ){
        printf("Stack is Empty\n");
    }
    else{
    ptr=t;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    }
}

void delete(stack **t){
stack  *ptr=*t;
*t=(*t)->next;
free(ptr);

}

int isEmpty(stack *t){
    if(t==NULL){
return 1;
    }
    return 0;
}

void main(){
    stack *t=NULL,*temp;
    int choice;
    while(1){
     printf("Enter your choice\n\
        1.Insertion\n\
        2.traverse\n\
        3.delete\n\
        4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert(&t,&temp);
            break;

            case 2:
            if(isEmpty(t)){
                printf("Stack is Enpty\n");
            }
            else{
            traversal(t);
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
            printf("Invalid choice\n");
        }
    }
}
