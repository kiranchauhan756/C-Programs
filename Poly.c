#include<stdio.h>
#include<stdlib.h>

typedef struct polynomial{
    int coeff;
    int power;
    struct polynomial *next;
}node;

int main(){
    int c,p,i;
    node *head=NULL;
    void insert_at_beg(node **,int,int);
    void traverse(node *);
    for(int i=0;i<=4;i++){
        printf("Enter coefficient and power of term %d",i);
        scanf("%d%d",&c,&p);
        insert_at_beg(&head,c,p);
    }

    return 0;
}

void insert_at_beg(node **head,int coeff,int power){
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->coeff=c;
    temp->power=p;
    temp->next=*head;
}

void traverse(node *head){
    while(head->next!=NULL){
        printf("%dX^%d+",head->coeff,head->power);
        head=head->next;
    }
}
