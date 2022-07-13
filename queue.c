//Array Implementation of queue
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
typedef struct queue_type{
    int front,rear;
    int a[MAX];
}queue;

void Insert(queue *q,int data){
    if(q->front==-1){
     q->front=0;
     q->rear=0;
    }
        else{
         q->rear++;
        }
        q->a[q->rear]=data;
    }


int isfull(queue q){
    if( q.rear==MAX-1){
        return 1;
    }
    return 0;
}
int isempty(queue q){
    if(q.front==-1 && q.rear==-1){
     return 1;
    }
    return 0;
}
void traverse(queue q){
        if(isempty(q)){
            printf("List is empty\n");
        }
        else if(q.front==-1 && q.rear==-1){
            printf("Queue is empty\n");
        }
        else{
        printf("The elements in queue is\n");
        for(int i=q.front;i<=q.rear;i++){
            printf("%d\n",q.a[i]);
            q.front=q.front+1;
           }
            }
        }

int delete(queue *q){
    int d;
     d=q->a[q->front];
     if(q->front==q->rear){
         q->front=-1;
         q->rear=-1;
     }
     else{
         q->front=q->front+1;
     }
     return d;
}
void main(){
    queue q;
    int choice,data;
   q.front=-1;
   q.rear=-1;
   while(1){
          printf("Enter your choice\n") ;
          scanf("%d",&choice);
          switch(choice){
              case 1:
              if(isfull(q)){
             printf("Queue overloaded\n");
              }
              else{
                  printf("Enter the data to be inserted\n");
                scanf("%d",&data);
                  Insert(&q,data);
              }
              break;

            case 2:
         if(isempty(q)){
            printf("Queue is empty\n");
         }
         else{
             traverse(q);
         }
         break;

        case 3:
        if(isempty(q)){
             printf("Queue is empty\n");
        }
        else{
            delete(&q);
        }
        break;

            case 4:
            exit(0);
            break;
          }

   }
}