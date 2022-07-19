//Array Implementation of Queue
#include<stdio.h>
#include<stdlib.h>
#define MAX 3
typedef struct queue_type{
    int a[MAX];
    int front,rear;
}queue;

int isFull(queue q){
    if( q.rear==MAX-1){
        return 1;
    }
    return 0;
}

int isEmpty(queue q){
    if(q.front==-1 && q.rear==-1){
        return 1;
    }
    return 0;
}

void Insert(queue *q,int data){
    if(q->front==-1){
   q->front=0;
   q->rear=0;
    }
    else{
        q->rear=q->rear+1;
    }
    q->a[q->rear]=data;
}

void traverse(queue q){
    for(int i=q.front;i<=q.rear;i++){
    printf("%d\n",q.a[i]);
    q.front=q.front+1;
    }
}

void delete(queue *q){
    if(q->front==q->rear){
        q->front=-1;
        q->rear=-1;
    }
    else{
 q->front=q->front+1;
    }
   
}

void main(){
    queue q;
    q.front=q.rear=-1;
    int choice,data;
    
    while(1){
        printf("Enter ur choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            if(isFull(q)){
                printf("Queue Overflow\n");
            }
            else{
                printf("Enter data\n");
                scanf("%d",&data);
                Insert(&q,data);
            }
            break;

            case 2:
            if(isEmpty(q)){
                printf("Queue Underflow\n");
            }
            else{
                traverse(q);
            }
            break;

           case 3:
           if(isEmpty(q)){
               printf("Queue Underflow\n");
           }
           delete(&q);
           break;

            case 4:
            exit(0);
            break;

        }
    }

}