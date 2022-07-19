//Array Implementation of linked list
#include<stdio.h>
#include<stdlib.h>

#define MAX 10

typedef struct lklist{
    int a[MAX];
    int head;
}node;

int isFull(node l){
if(l.head==MAX-1){
    return 1;
}
return 0;
}

int isEmpty(node l){
if(l.head==-1){
    return 1;
}
return 0;
}

void insert(node *l,int data){
if(l->head==-1){
    l->head=0;
}
else{
    l->head++;
}
l->a[l->head]=data;
}
void traversal(node l){
    int k=0;
    while(k!=l.head){
        printf("%d\n",l.a[k]);
        k++;
    }
    printf("%d\n",l.a[l.head]);
}
void InsertLast(node *l,int data){
    int m=l->head;
    while(m!=l->head){
    m++;
    }
    l->a[m]=data;
}

void main(){
    node l;
    l.head=-1;
    int choice,data;
    while(1){
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            if(isFull(l)){
                printf("List is full\n");
            }
            else{
                printf("Enter data\n");
                scanf("%d",&data);
            insert(&l,data);
            }
            break;

            case 2:
            if(isEmpty(l)){
                printf("List is Empty\n");
            }
            else{
            traversal(l);
            }
            break;

            case 3:
            printf("Enter data \n");
            scanf("%d",&data);
            InsertLast(&l,data);
            break;

           
        }
    }
}