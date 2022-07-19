#include<stdio.h>
#include<stdlib.h>
//Circular link using Linked List
typedef struct queue_link{
    int data;
    struct queue_link *next;
}node;

node *front=NULL,*rear=NULL,*temp;

void Insert(node **front,node **rear,node **temp){
    printf("Enter the data\n");
    scanf("%d",&(*temp)->data);
    if(*rear==NULL){
        *front=*temp;
        *rear=*temp;
        (*rear)->next=*temp;
    }
    else{
     (*rear)->next=*temp;
     *rear=*temp;
     (*temp)->next=*front;
    }
}

void traverse(node *front,node *rear){
while(front!=rear){
printf("%d\n",front->data);
front=front->next;
}
printf("%d\n",rear->data);
}

void delete(node **front,node **rear){
    node *ptr=*front;
    if(*front==*rear){
        printf("Queue is Empty\n");
    }
    else{
       ptr=ptr->next;
       free(front);
       *front=ptr;
    }
}
void main(){
    int choice;
    while(1){
        temp=(node*)malloc(sizeof(node));
        printf("Enter your choice\n\
        1.Insertion\n\
        2.traverse\n\
        3.delete\n\
        4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            Insert(&front,&rear,&temp);
            break;

            case 2:
            traverse(front,rear);
            break;

            case 3:
            delete(&front,&rear);
            break;

            case 4:
            exit(0);
            break;

            default:
            printf("Invalid Choice\n");
        }
    }
}
