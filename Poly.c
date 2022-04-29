
#include<stdio.h>
#include<stdlib.h>

typedef struct llkist{
    int coeff;
    char var;
    int varDeg;
    struct llkist *next; 
}poly;

poly *head=NULL,*temp,*ptr;

void InsertExp(poly **head,poly **temp){
      scanf("%d %c %d",&(*temp)->coeff,&(*temp)->var,&(*temp)->varDeg);
      (*temp)->next=*head;
      *head=*temp;
}
void Traversal(poly *head,poly *temp,int term){
 printf("The experssion is\n");
   temp=head;
  for(int i=1;i<=term;i++){
   while(temp!=NULL){
       if(temp->next!=NULL){
       printf("%d%c^%d + ",temp->coeff,temp->var,temp->varDeg);
       }
       else{
            printf("%d%c^%d ",temp->coeff,temp->var,temp->varDeg); 
       }
       temp=temp->next;
   }
  }
}

void Traversal_In_sorted(poly *head,poly *temp,poly *ptr,int term){
 printf("\nThe experssion according to highest degree\n");
   ptr=head;
  for(int i=1;i<=term;i++){
   while(ptr->next!=NULL){
       ptr=ptr->next;
   }
   temp=ptr;
   while(temp!=NULL){
              if(temp->next!=NULL){
       printf("%d%c^%d + ",temp->coeff,temp->var,temp->varDeg);
       }
       else{
            printf("%d%c^%d ",temp->coeff,temp->var,temp->varDeg); 
       }
       temp=temp->next;
   }
  }
}


void main(){
  int term;
  printf("Enter the number of terms of expression\n");
  scanf("%d",&term);
  for(int i=1;i<=term;i++){
      temp=(poly*)malloc(sizeof(poly));
       printf("Enter the coeffient,variable and degree of var of term %d\n",i);
     InsertExp(&head,&temp);
  }
   Traversal(head,temp,term);
   Traversal_In_sorted(head,temp,ptr,term);
}
