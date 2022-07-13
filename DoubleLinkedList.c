#include<stdio.h>
#include<stdlib.h>
typedef struct dlklist{
    int info;
    struct dlklist *prev;
    struct dlklist *next;
}node;

void InsertAtBeg(node **head,node **tail,node **temp){
printf("Enter the data\n");
scanf("%d",&(*temp)->info);
(*temp)->prev=NULL;
(*temp)->next=*head;

if(*head!=NULL){
    (*head)->prev=*temp;
}
(*head)=*temp;
printf("Node created successfully\n");
}

void Traversal(node *head,node *temp){
printf("The elements are:\n");
temp=head;
while(temp!=NULL){
    printf("%d\n",temp->info);
    temp=temp->next;
 }
}

void Searching(node *head,node *temp){
     int item;
     printf("Enter the item to be searched\n");
     scanf("%d",&item);
     temp=head;
     while(temp!=NULL){
         if(item==temp->info){
             printf("Item is present in the list\n");
             break;
         }
         else {
             temp=temp->next;
         }
         if(temp==NULL){
             printf("Item is not present in the list\n");
             break;
         }
     }
}
void Reversal(node *head,node *tail){
    tail=head;
    while(tail!=NULL){
        printf("%d",tail->info);
        tail=tail->prev;
    }
}
void InsertAtEnd(node **head,node **tail,node **temp){
    printf("Enter the info to be inserted\n");
    scanf("%d",&(*temp)->info);
    (*temp)->next=NULL;
    (*temp)->prev=*tail;
    while((*tail)->next!=NULL){
        (*tail)=(*tail)->next;
    }
    (*tail)->next=*temp;
    (*tail)=(*temp);

}
void main(){
    node *head=NULL,*tail=NULL,*temp;
    int choice;
    while(1){
        temp=(node*)malloc(sizeof(node));
        printf("Enter your choice\n\
        1.InsertAtBeginning\n\
        2.traversal\n\
        3.Searching\n\
        4.Add at end\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            InsertAtBeg(&head,&tail,&temp);
            break;

            case 2:
            Traversal(head,temp);
            break;

            case 3:
            Searching(head,temp);
            break;

            case 4:
           InsertAtEnd(&head,&temp,&tail);
           break;
          
          case 5:
          Reversal(head,tail);
          break;

           case 9:
           exit(1);
           break;

        }
    }
}