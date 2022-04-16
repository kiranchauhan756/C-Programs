#include<stdio.h>
#include<stdlib.h>

typedef struct lklist{
    int info;
    struct lklist *next;
}node;

void main(){
    node *head=NULL,*temp,*ptr,*ptr1;
    int choice,position;
    while(1){
    printf("Enter your choice\n\
    1.Add at beginning\n\
    2.traversal\n\
    3.Add at last\n\
    4.Add at specific position\n\
    5.Delete at beginning\n");

    scanf("%d",&choice);
    temp=(node*)malloc(sizeof(node));
    
    switch(choice){
        case 1:
        printf("Enter the element to be inserted\n");
        scanf("%d",&temp->info);
        temp->next=head;
        head=temp;
        printf("Node created successfully\n");
        break;

        case 2:
        printf("Traversal\n");
        temp=head;
        while(temp!=NULL){
            printf("%d\n",temp->info);
            temp=temp->next;
        }
        break;

    case 3:
    printf("Enter the value to be inserted at last\n");
    scanf("%d",&temp->info);
    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    ptr->next->next=NULL;
    break;
 
 case 4:
 printf("Enter the element & its position at which u want to insert\n");
 scanf("%d %d",&temp->info,&position);
 ptr1=NULL;
 ptr=head;
 if(position==1){
     temp->next=head;
     head=temp;
 }
 else{
     while(position!=1){
         temp->next=ptr->next;
         position--;
     }
     ptr->next=temp;
 }
break;

case 5:
temp=head;
head=temp->next;
free(temp);

    printf("Deleted successfully\n");
    
    }
    }
}