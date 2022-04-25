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
    void traverse(node *,int);
    for(int i=1;i<=4;i++){
        printf("Enter coefficient and power of term %d\n",i);
        scanf("%d%d",&c,&p);
        insert_at_beg(&head,c,p);
        
    }
traverse(head,c);
    return 0;
}

void insert_at_beg(node **head,int c,int p){
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->coeff=c;
    temp->power=p;
    temp->next=*head;
    *head=temp;
}


void traverse(node *head,int coeff ){
    while(head!=NULL){
         printf("%dX^%d",head->coeff,head->power);
        if(head->coeff>=0 ){
            if(head->next!=NULL)
            printf("+");
    }
        head=head->next;
    }
}
