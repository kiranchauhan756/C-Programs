#include<stdio.h>
#include<stdlib.h>
typedef struct dlklist{
    int data;
    struct dlklist *next;
    struct dlklist *prev;
}node ;

node *head,*tail,*temp;

void CreateLinkList(node *head,node *tail){
    head=NULL;
    tail=NULL;
}

void InsertAtBeg(node **head,node **temp){
printf("Enter the data to be inserted\n");
scanf("%d",&(*temp)->data);
(*temp)->prev=NULL;
(*temp)->next=*head;
*head=*temp;
}

void InsertAtEnd(node **head,node **tail,node **temp){
    printf("Enter the data to be inserted\n");
    scanf("%d",&(*temp)->data);
    *tail=*head;
    while((*tail)->next!=NULL){
        *tail=(*tail)->next;
    }
    (*tail)->next=*temp;
    (*temp)->prev=*tail;  
    (*temp)->next=NULL;  
}

void InsertAtSpecific(node **head,node** tail,node **temp){
    printf("Enter the position where u want to insert and Enter the data \n");
    int position;
    *tail=*head;
    scanf("%d %d",&position,&(*temp)->data);
    position--;
    while(position!=1){
        *tail=(*tail)->next;
        position--;
    }
        (*temp)->next=(*tail)->next;
    (*temp)->prev=*tail;
     (*tail)->next->prev=*temp;
     (*tail)->next=*temp;
    
    printf("Successfully inserted\n");
}

void Traversal(node *head,node *temp){
    int count=0;
    printf("Elements in the list are\n");
     if (head == NULL)
            {
                printf("Link is empty\n");
            }
            else{
  temp=head;
  while(temp!=NULL){
      printf("%d\n",temp->data);
      temp=temp->next;
      count++;
  }
  printf("Number of nodes=%d\n",count);
            }
}
void deleteBeg(node **head,node **temp){
    *temp=*head;
     *head=(*temp)->next;
     free(temp);
     printf("Deleted\n");
}

void DeleteAtEnd(node **head,node **tail){
*tail=*head;
while((*tail)->next->next!=NULL){
    *tail=(*tail)->next;
 }
 (*tail)->next=NULL;
 free(tail);
}

void  deleteAtSpecific(node **head,node **tail,node **ptr){
    printf("Enter the position where u want to delete  \n");
    int position;
    scanf("%d",&position);
        *tail=*head;
    *ptr=*head;
     if (*head == NULL)
            {
                printf("List is empty\n");
            }

            else if (position == 1)
            {
                *head = (*ptr)->next; // bcz the second node is being pointed out
                free(ptr);
            }

   else{
    while(position!=1){
        *ptr=*tail;
        *tail=(*tail)->next;
        position--;
    }
    (*ptr)->next=(*tail)->next;
    free(tail);
    printf("Success\n");
   }

}


void main(){
    node *ptr;
    int choice;
    while(1){
        temp=(node*)malloc(sizeof(node));
printf("Enter your choice\n\
1:CreateLinkList\n\
2:InsertAtBeg\n\
3:Traversal\n\
4:deleteBeg\n\
5:InsertAtEnd\n\
6:DeleteAtEnd\n\
7:InsertAtSpecific\n\
8:deleteAtSpecific\n");

scanf("%d",&choice);
switch(choice){
    case 1:
    CreateLinkList(head,tail);
    break;

    case 2:
    InsertAtBeg(&head,&temp);
    break;
    
    case 3:
    Traversal(head,temp);
    break;

    case 4:
    deleteBeg(&head,&temp);
    break;

    case 5:
    InsertAtEnd(&head,&tail,&temp);
    break;

    case 6:
    DeleteAtEnd(&head,&tail);
    break;
     
     case 7:
     InsertAtSpecific(&head,&tail,&temp);
     break;
    
    case 8:
    deleteAtSpecific(&head,&tail,&ptr);
    break;

    default:
    printf("Invalid choice\n");

}
    }
}