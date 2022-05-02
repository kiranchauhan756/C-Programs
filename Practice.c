#include<stdio.h>
#include<stdlib.h>

typedef struct lklist{
    int data;
    struct lklist *next;
}node;

 node *head,*temp;
 
 void CreateLink(node *head){
     head=NULL;
     printf("Linked list created successfully\n");
 }

void InsertAtBeg(node **head,node **temp){
    printf("Enter the element to be inserted\n");
    scanf("%d",&(*temp)->data);
    (*temp)->next=*head;
    *head=*temp;
}

void Traversal(node *head,node *temp){
    printf("The elements in the linked list are\n");
    temp=head;
    while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
    }
}

void InsertAtEnd(node **head,node **temp,node **ptr){
      printf("Enter the element to be inserted\n");
    scanf("%d",&(*ptr)->data);
*temp=*head;
while((*temp)->next!=NULL){
*temp=(*temp)->next;
}
(*temp)->next=(*ptr);
printf("Inserted at end successfully\n");
}

void main(){
   node *ptr;
    int choice;
    while(1){
        printf("Enter your Choice\n");
        scanf("%d",&choice);
        temp=(node*)malloc(sizeof(node));
        switch(choice){
            case 1:
            CreateLink(head);
            break;

            case 2:
            InsertAtBeg(&head,&temp);
            break;

            case 3:
            Traversal(head,temp);
            break;

            case 4:
            InsertAtEnd(&head,&temp,&ptr);
            break;

            default:
            printf("Invalid choice\n");
        }
    }
}