#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct circular{
    int a[MAX];
    int front,rear;
}cqueue;

int isFull(cqueue q){
    if((q.rear+1)%MAX==q.front){
        return 1;
    }
    
    return 0;
}

int isEmpty(cqueue q){
    if(q.front==-1 && q.rear==-1){
        return 1;
    }
    return 0;
}
void Insert(cqueue *q,int data){
    if(q->front==-1){
     q->front=0;
     q->rear=0;
    }
    else{
        q->rear=(q->rear+1)%MAX;
    }
    q->a[q->rear]=data;
}

void traverse(cqueue q){
    int i=q.front;
   while(i!=q.rear){
       printf("%d\n",q.a[i]);
       i=(i+1)%MAX;
   }
          printf("%d\n",q.a[q.rear]);
}
void delete(cqueue *q){
    if(q->front==q->rear){
        q->front=-1;
        q->rear=-1;
    }

        printf("deleted ele=%d\n",q->a[q->front]);
 q->front=(q->front+1)%MAX;
    
   
}
void main(){
    cqueue q;
    q.front=q.rear=-1;
    int choice,data;
    while(1){
     printf("Enter ur choice\n");
     scanf("%d",&choice);
     switch(choice){
         case 1:
         if(isFull(q)){
             printf("Queue Overloaded\n");
         }
         else{
             printf("Enter the data\n");
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
        else{
        delete(&q);
        }
        break;
     }
    }

}