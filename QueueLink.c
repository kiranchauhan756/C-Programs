#include<stdio.h>
#include<stdlib.h>

//Queue Using Linked List

typedef struct queue_link{
    int data;
    struct queue_link *next;
}queue;

void insert(queue **front,queue **rear,queue **temp){
    printf("Enter the data\n");
    scanf("%d",&(*temp)->data);
    if(*rear==NULL){
    *front=*temp;
    *rear=*temp;
    }
    else{
        (*rear)->next=*temp;
        (*rear)=*temp;
        (*rear)->next=NULL;
    }  
}

void traversal(queue *front,queue *rear){
        if(front==NULL && rear==NULL){
        printf("Queue is Empty\n");
    }
    while(front!=rear){
        printf("%d\n",front->data);
        front=front->next;
    }
    printf("%d\n",rear->data);
}

void delete(queue **front,queue **rear){
    if(*front==NULL){
        printf("Queue is Empty\n");
    }

    else if(*front==*rear){
        *front=NULL;
    }

    else{
        queue  *ptr=*front;
*front=(*front)->next;
free(ptr);

    }
}

void main(){
    queue *front=NULL,*rear=NULL,*temp;
    int choice;
    while(1){
        temp=(queue*)malloc(sizeof(queue));
        printf("Enter your choice\n\
        1.Insertion\n\
        2.traverse\n\
        3.delete\n\
        4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
        
                insert(&front,&rear,&temp);
            break;

            case 2:
            traversal(front,rear);
            break;

            case 3:
            delete(&front,&rear);
            break;

            case 4:
            exit(0);
            break;

            default:
            printf("Invalid choice\n");
        }
    }
}
