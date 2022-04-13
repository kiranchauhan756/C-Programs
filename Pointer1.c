#include<stdio.h>
#include<stdlib.h>
typedef struct lklist{
    int info;
 struct lklist *next;
}node;
void main(){
    int ch,data,*temp;
    node *head=NULL;
    while(1){
        printf("Enter your choice\n \
        Select 1 for Add at beginnning\n \
         Select 2 for Add at last\n \
          Select 3 for Remove from beginnning\n \
           Select 4 for Remove From last\n \
            Select 5 for exit  ");
            scanf("%d",&ch);
            switch(ch){
                case 1: 
                printf("Enter elements to be inserted\n");
                scanf("%d",&data);
                temp=(node*)malloc(sizeof(node));
                temp->data=data;
                if(head!=NULL){
                    temp->next=head;
                }
                else
               {
                 temp->next=NULL;  
               }
               head=temp;
               printf("node inserted successfully\n");
               if(temp==NULL){
                   printf("there is no avaliable m/m\n");
               }
               break;
                case 5:
                exit(1);
                default:
                printf("wrong choice\n");
            }
            
    }
}
  

