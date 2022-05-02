#include<stdio.h>
#include<stdlib.h>
typedef struct lklist{
    int info;
    struct lklist *next;
}node;

void InsertAtBeg(node **head,node **temp){
    printf("Enter the data\n");
    scanf("%d",&(*temp)->info);
    (*temp)->next=*head;
     *head=*temp;
}
void Traversal(node *head,node *temp){
    printf("The elements in linked list are\n");
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->info);
        temp=temp->next;
    }

}
void Searching(node *head,node *temp){
    int item;
  printf("Enter the elements to be searched\n");
  scanf("%d",&item);
  temp=head;
  while(temp!=NULL){
 if(temp->info==item){
printf("Element is searched\n");
break;
 }
 else {
     temp=temp->next;
 }
 if(temp==NULL){
     printf("Element not found\n");
     break;
 }
  }
}

void main(){
    node *head=NULL,*temp;
    int choice;
    while(1){
        temp=(node*)malloc(sizeof(node));
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            InsertAtBeg(&head,&temp);
            break;

            case 2:
            Traversal(head,temp);
            break;

            case 3:
            Searching(head,temp);
            break;

        }
    }
}