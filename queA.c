#include<stdio.h>
#define MAX 4
typedef struct queueArray{
int front,rear;
int a[MAX];
}queue;

void Insert(queue *q,int data);
void traverse(queue q);
int isFull(queue q);
int isEmpty(queue q);
int delete(queue *q );
void main(){
    queue q;
    q.front=-1,q.rear=-1;
    int ch,data;
    while(1){
        printf("Enter ur choice\n");
        scanf("%d",&ch);
        switch(ch){
          case 1:
          if(isFull(q)){
              printf("queue is Full can't Insert \n");
          }  else{
              printf("Enter the element\n");
              scanf("%d",&data);
          Insert(&q,data);
          
          }
          break;

          case 2:
          if(isEmpty(q)){
              printf("Queue is Empty\n");
          }else{
          traverse(q);
          }
          break;

        case 3:
        if(isEmpty(q)){
         printf("Queue is Empty\n");
        }
        else{
         delete(&q);
        }
  break;    
        }
    }
}

int isFull(queue q){
    if(q.rear==MAX-1){
        return 1;
    }
    return 0;
}
int isEmpty(queue q){
    if(q.rear==-1 && q.front==-1){
        return 1;
    }
    return 0;
}
void Insert(queue *q,int data){
    if((q)->rear==-1){
        (q)->front=0;
        (q)->rear=0;
    }
    else{
        (q)->rear++;
    }
    q->a[q->rear]=data;
}
void traverse(queue q){
for(int i=q.front;i<=q.rear;i++){
    printf("%d ",q.a[i]);
}
printf("\n");
}
int  delete(queue *q){
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

