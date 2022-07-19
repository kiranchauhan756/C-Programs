#include <stdio.h>
#include <stdlib.h>

typedef struct lklist
{
    int info;
    struct lklist *next;
} node;

 void insert_at_beg(node **head, node **temp){
     
    *temp=(node*)malloc(sizeof(node));
     printf("Enter the data \n");
     scanf("%d",&(*temp)->info);
     (*temp)->next=*head;
      *head=*temp;
      printf("Node created Successfully\n"); 
 }

 void traversal(node *head, node *temp){
     int count;
 printf("The data entered in the linked list are:\n");
            if (head == NULL)
            {
                printf("Link is empty\n");
            }
            else
            {
                count = 0;
                temp = head;
                while (temp != NULL)
                {
                    count++;
                    printf("%d\n", temp->info);
                    temp = temp->next;
                } // end of while
                printf("Number of nodes created=%d\n", count);
            }
 }
 
 void searching(node *head,node *temp,int item){
     printf("Enter the elements to be searched\n");
    scanf("%d",&item);
    temp=head;
    while(temp!=NULL){
        if(temp->info==item){
            printf("Element found\n");
            break;
        }
        else  {
            temp=temp->next;
        }
        if (temp==NULL){
     printf("Element Not found\n");
        }
    }
 }

 void insert_at_last(node **head,node **temp,node **ptr){
     *temp=(node *)malloc(sizeof(node));

     *ptr=*head;
     printf("Enter the data to be inserted\n");
     scanf("%d",&(*temp)->info);
     (*temp)->next=NULL;
     while((*ptr)->next!=NULL){
      *ptr=(*ptr)->next;
     }
    (*ptr)->next=*temp;

 }

 void delete_at_beg(node **head,node **temp){
     *temp=*head;
     *head=(*head)->next;
    free(temp);
     
 }

 void delete_complete_list(node **head,node **temp){   
     while(*head!=NULL){
       *temp=*head;
      *head=(*head)->next;
      free(temp);
     }
     *temp=NULL;
 }

void delete_at_specific_position(node **head,node **temp,node **ptr,node **ptr1){
    int position;
printf("Enter the position of node that u want to delete\n");
            scanf("%d", &position);
            *ptr = *head;
            *ptr1 = *head;
            if (*head == NULL)
            {
                printf("List is empty\n");
            }

            else if (position == 1)
            {
                *head = (*ptr)->next; // bcz the second node is being pointed out
                free(ptr);
            }

            else
            {
                while (position != 1)
                {
                    *ptr1 = *ptr;
                    *ptr = (*ptr)->next;
                    position--;
                }
                (*ptr1)->next = (*ptr)->next;
                free(ptr);
            }
}
void insertion_at_specific_position(node **head,node **temp,node **ptr,node **ptr1){
    int position;
             printf("Enter the data & the position at which u want to insert a new ele\n");
            scanf("%d %d", &(*temp)->info, &position);
            *ptr = *head;
            while (position != 1)
            {
                *ptr = (*ptr)->next;
                position--;
            }
            (*temp)->next =(* ptr)->next;
            (*ptr)->next = *temp;
}

void delete_at_end(node **head,node **temp,node **ptr){
    *ptr = *head;
            while ((*ptr)->next->next != NULL)
            {
                *ptr = (*ptr)->next;
            }
            free((*ptr)->next);
            (*ptr)->next = NULL;
}
node  *Reverse(node **head){
    node *prevNode=NULL;
    node *nextNode=*head;
}
void main()
{
    int choice,data,item;
    node *head=NULL, *temp,*ptr,*ptr1;
    while (1)
    {
        printf("Enter your choice\n\
   1.For inserting ele at beginning\n\
   2.For traversing and counting nodes\n\
   3.For searching\n\
   4.For Insert At Last\n\
   5.To delete at beginning\n\
   6.To delete complete link list\n\
   7.deletion at specific  position\n\
   8.Insertion at specific position\n\
   9.Deletion at end\n\
   10.For exit\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insert_at_beg(&head, &temp);
        break;

    case 2:
        traversal(head, temp);
        break;
 
    case 3:
    searching(head,temp,item);
    break;

    case 4:
    insert_at_last(&head, &temp,&ptr);
    break;
  
  case 5:
  delete_at_beg(&head,&temp);
  break;
 
 case 6:
 delete_complete_list(&head,&temp);
 break;

 case 7:
 delete_at_specific_position(&head,&temp,&ptr,&ptr1);
 break;

 case 8:
insertion_at_specific_position(&head,&temp,&ptr,&ptr1);
break;

case 9:
delete_at_end(&head,&temp,&ptr);
break;

case 10:
Reverse(&head);
break;

    case 11:
        exit(1);
        break;

        default:
        printf("Invalid Choice\n");
    }//end of switch
    }//end of while
}
